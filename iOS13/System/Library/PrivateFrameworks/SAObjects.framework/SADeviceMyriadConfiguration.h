/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand

@property (assign,nonatomic) double deviceAdjustment; 
@property (assign,nonatomic) double deviceClass; 
@property (assign,nonatomic) double deviceDelay; 
@property (assign,nonatomic) double deviceTrumpDelay; 
+(id)deviceMyriadConfiguration;
+(id)deviceMyriadConfigurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)deviceClass;
-(void)setDeviceClass:(double)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(double)deviceAdjustment;
-(void)setDeviceAdjustment:(double)arg1 ;
-(double)deviceDelay;
-(void)setDeviceDelay:(double)arg1 ;
-(double)deviceTrumpDelay;
-(void)setDeviceTrumpDelay:(double)arg1 ;
@end

