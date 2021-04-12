/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand

@property (assign,nonatomic) double deviceAdjustment; 
@property (assign,nonatomic) double deviceClass; 
@property (assign,nonatomic) double deviceDelay; 
@property (assign,nonatomic) double deviceTrumpDelay; 
@property (assign,nonatomic) double deviceVTEndtimeDistanceThreshold; 
+(id)deviceMyriadConfiguration;
+(id)deviceMyriadConfigurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(double)deviceAdjustment;
-(void)setDeviceAdjustment:(double)arg1 ;
-(void)setDeviceDelay:(double)arg1 ;
-(void)setDeviceTrumpDelay:(double)arg1 ;
-(double)deviceVTEndtimeDistanceThreshold;
-(void)setDeviceVTEndtimeDistanceThreshold:(double)arg1 ;
-(double)deviceClass;
-(void)setDeviceClass:(double)arg1 ;
-(double)deviceTrumpDelay;
-(double)deviceDelay;
@end

