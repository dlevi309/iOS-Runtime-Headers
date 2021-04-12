/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface CFBSBatteryStatus : SADomainObject

@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy) NSNumber * batteryPercent; 
@property (nonatomic,copy) NSNumber * batteryCharging; 
@property (nonatomic,copy) NSNumber * lowBattery; 
+(id)object;
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setLowBattery:(NSNumber *)arg1 ;
-(NSNumber *)batteryPercent;
-(void)setBatteryPercent:(NSNumber *)arg1 ;
-(NSNumber *)batteryCharging;
-(void)setBatteryCharging:(NSNumber *)arg1 ;
-(NSNumber *)lowBattery;
@end

