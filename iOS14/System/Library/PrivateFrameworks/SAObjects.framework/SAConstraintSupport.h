/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAConstraintSupport : AceObject <SAAceSerializable>

@property (nonatomic,retain) id<SASupportCondition> condition; 
@property (nonatomic,copy) NSString * property; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)constraintSupport;
+(id)constraintSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCondition:(id<SASupportCondition>)arg1 ;
-(NSString *)property;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setProperty:(NSString *)arg1 ;
-(id<SASupportCondition>)condition;
@end

