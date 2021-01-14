/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceIdentity.framework/DeviceIdentity
*/


#import <DeviceIdentity/DeviceIdentity-Structs.h>
@interface GestaltHlprDeviceIdentity : NSObject
+(id)getSharedInstance;
-(id)copyAnswer:(CFStringRef)arg1 ;
-(BOOL)getBoolAnswer:(CFStringRef)arg1 ;
-(void)addAGestaltKey:(CFStringRef)arg1 toDictionary:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(id)copyDeviceIDInfo:(id*)arg1 ;
-(id)copyDeviceInfo:(id*)arg1 ;
-(id)copyRegulatoryImagesInfo:(id*)arg1 ;
-(void)updateRecertInfo:(id)arg1 errors:(id*)arg2 ;
@end

