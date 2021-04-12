/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setExamples:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)variation;
-(void)setVariation:(NSString *)arg1 ;
@end

