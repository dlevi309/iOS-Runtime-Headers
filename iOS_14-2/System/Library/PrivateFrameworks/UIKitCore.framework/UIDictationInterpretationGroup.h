/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)interpretations;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isLowConfidence;
-(UIDictationInterpretation *)bestInterpretation;
-(id)initWithInterpretations:(id)arg1 isLowConfidence:(BOOL)arg2 ;
-(id)initWithInterpretations:(id)arg1 ;
-(double)bestConfidenceScore;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

