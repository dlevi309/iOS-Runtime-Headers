/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)windDirection;
-(void)setWindDirection:(NSString *)arg1 ;
-(NSNumber *)windDirectionDegree;
-(void)setWindDirectionDegree:(NSNumber *)arg1 ;
@end

