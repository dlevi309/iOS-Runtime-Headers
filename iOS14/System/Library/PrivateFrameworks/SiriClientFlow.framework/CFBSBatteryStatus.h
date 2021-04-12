/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)deviceName;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setLowBattery:(NSNumber *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSNumber *)batteryPercent;
-(void)setBatteryPercent:(NSNumber *)arg1 ;
-(NSNumber *)batteryCharging;
-(void)setBatteryCharging:(NSNumber *)arg1 ;
-(NSNumber *)lowBattery;
@end

