/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWeatherCondition : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * conditionCode; 
@property (assign,nonatomic) long long conditionCodeIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)condition;
+(id)conditionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setConditionCode:(NSString *)arg1 ;
-(NSString *)conditionCode;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)conditionCodeIndex;
-(void)setConditionCodeIndex:(long long)arg1 ;
@end

