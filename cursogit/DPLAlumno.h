//
//  DPLAlumno.h
//  cursogit
//
//  Created by Diego Pérez Lora on 16/03/13.
//  Copyright (c) 2013 Diego Pérez Lora. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DPLAlumno : NSObject

@property (nonatomic, strong)   NSString *nombre;
@property (nonatomic, strong)   NSString *apellidos;
@property (nonatomic, strong)   NSNumber *telefono;
@property (nonatomic, strong)   NSString *direccion;
@property (nonatomic, assign)   BOOL esRegistered;
@property (nonatomic, assign)   BOOL email;

- (NSArray *) eventos;

@end
