/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionVariation : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * examples; 
@property (nonatomic,copy) NSString * variation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definitionVariation;
+(id)definitionVariationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)examples;
-(id)encodedClassName;
-(void)setExamples:(NSArray *)arg1 ;
-(void)setVariation:(NSString *)arg1 ;
-(NSString *)variation;
@end

