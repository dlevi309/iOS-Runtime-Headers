/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAWeatherWindSpeed : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * windDirection; 
@property (nonatomic,copy) NSNumber * windDirectionDegree; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)windSpeed;
+(id)windSpeedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setWindDirection:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)windDirectionDegree;
-(void)setWindDirectionDegree:(NSNumber *)arg1 ;
-(NSString *)windDirection;
-(id)encodedClassName;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
@end

