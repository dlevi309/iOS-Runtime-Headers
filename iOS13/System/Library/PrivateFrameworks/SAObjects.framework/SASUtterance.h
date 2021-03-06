/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASUtterance : AceObject <SAAceSerializable>

@property (assign,nonatomic) double confidenceScore; 
@property (nonatomic,copy) NSArray * interpretationIndices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)utterance;
+(id)utteranceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)confidenceScore;
-(void)setConfidenceScore:(double)arg1 ;
-(id)encodedClassName;
-(NSArray *)interpretationIndices;
-(void)setInterpretationIndices:(NSArray *)arg1 ;
@end

