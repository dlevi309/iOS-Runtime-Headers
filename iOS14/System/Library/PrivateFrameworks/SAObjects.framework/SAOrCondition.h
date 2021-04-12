/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASupportCondition.h>

@class NSArray, NSString;

@interface SAOrCondition : AceObject <SASupportCondition>

@property (nonatomic,copy) NSArray * conditions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)orCondition;
+(id)orConditionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

