//
//  DPLEvento.h
//  cursogit
//
//  Created by Diego Pérez Lora on 16/03/13.
//  Copyright (c) 2013 Diego Pérez Lora. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DPLEvento : NSObject

@property (nonatomic, strong) NSDate *fecha;
@property (nonatomic, strong) NSString *nombre;
@property (nonatomic, strong) NSString *hora;
@property (nonatomic, strong) NSString *descripcion;
@property (nonatomic, strong) NSSet *invitados;

@end
