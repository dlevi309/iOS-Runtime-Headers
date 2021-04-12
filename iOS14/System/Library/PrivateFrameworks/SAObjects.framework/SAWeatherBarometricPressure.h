/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWeatherBarometricPressure : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * trend; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)barometricPressure;
+(id)barometricPressureWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)trend;
-(id)encodedClassName;
-(void)setValue:(NSString *)arg1 ;
-(void)setTrend:(NSString *)arg1 ;
-(NSString *)value;
@end

