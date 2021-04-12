/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, UIDictationInterpretation;

@interface UIDictationInterpretationGroup : NSObject <NSSecureCoding> {

	BOOL _isLowConfidence;
	NSArray* _interpretations;

}

@property (nonatomic,readonly) NSArray * interpretations;                                   //@synthesize interpretations=_interpretations - In the implementation block
@property (nonatomic,readonly) double bestConfidenceScore; 
@property (nonatomic,readonly) UIDictationInterpretation * bestInterpretation; 
@property (nonatomic,readonly) BOOL isLowConfidence;                                        //@synthesize isLowConfidence=_isLowConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLowConfidence;
-(NSArray *)interpretations;
-(id)initWithInterpretations:(id)arg1 isLowConfidence:(BOOL)arg2 ;
-(id)initWithInterpretations:(id)arg1 ;
-(UIDictationInterpretation *)bestInterpretation;
-(double)bestConfidenceScore;
@end

