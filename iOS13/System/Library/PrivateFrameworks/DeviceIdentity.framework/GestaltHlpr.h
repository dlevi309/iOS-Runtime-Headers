/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceIdentity.framework/DeviceIdentity
*/


#import <DeviceIdentity/DeviceIdentity-Structs.h>
@interface GestaltHlpr : NSObject
+(id)getSharedInstance;
-(id)copyAnswer:(CFStringRef)arg1 ;
-(BOOL)getBoolAnswer:(CFStringRef)arg1 ;
-(void)addAGestaltKey:(CFStringRef)arg1 toDictionary:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(id)copyDeviceIDInfo:(id*)arg1 ;
-(id)copyDeviceInfo:(id*)arg1 ;
-(id)copyRegulatoryImagesInfo:(id*)arg1 ;
-(void)updateRecertInfo:(id)arg1 errors:(id*)arg2 ;
@end

