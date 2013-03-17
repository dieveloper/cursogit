//
//  DPLEventoViewController.h
//  cursogit
//
//  Created by Diego Pérez Lora on 16/03/13.
//  Copyright (c) 2013 Diego Pérez Lora. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DPLEvento.h"

@interface DPLEventoViewController : UIViewController

@property (nonatomic, strong) DPLEvento *evento;

@property (nonatomic, strong) NSURL *url;

@end
