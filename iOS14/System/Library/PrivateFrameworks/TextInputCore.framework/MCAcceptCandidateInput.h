/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@class NSString, NSArray;

@interface MCAcceptCandidateInput : MCKeyboardInput {

	NSString* _candidateText;
	NSString* _convertedInput;
	NSArray* _remainingMecabraInputs;
	NSString* _remainingInputString;

}

@property (nonatomic,copy,readonly) NSString * candidateText;               //@synthesize candidateText=_candidateText - In the implementation block
@property (nonatomic,copy,readonly) NSString * convertedInput;              //@synthesize convertedInput=_convertedInput - In the implementation block
@property (copy) NSArray * remainingMecabraInputs;                          //@synthesize remainingMecabraInputs=_remainingMecabraInputs - In the implementation block
@property (copy) NSString * remainingInputString;                           //@synthesize remainingInputString=_remainingInputString - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithCandidateText:(id)arg1 convertedInput:(id)arg2 ;
-(NSString *)candidateText;
-(NSString *)convertedInput;
-(NSArray *)remainingMecabraInputs;
-(void)setRemainingMecabraInputs:(NSArray *)arg1 ;
-(NSString *)remainingInputString;
-(void)setRemainingInputString:(NSString *)arg1 ;
@end

