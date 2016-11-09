//
//  DeviceLibrary.h
//  DeviceLibrary
//
//  Created by Interakt on 18/07/16.
//  Copyright © 2016 Interakt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeviceLibrary : NSObject

+ (DeviceLibrary *)sharedManager;
-(float)setFont:(float)fontSize;
-(float)setWidth:(float)width;
-(float)setHeight:(float)height;

@end
