/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)conditionCode;
-(void)setConditionCode:(NSString *)arg1 ;
-(long long)conditionCodeIndex;
-(void)setConditionCodeIndex:(long long)arg1 ;
@end

