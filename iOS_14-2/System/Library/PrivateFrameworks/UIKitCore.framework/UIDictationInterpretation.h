/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface UIDictationInterpretation : NSObject <NSSecureCoding> {

	NSArray* _tokens;
	double _averageConfidenceScore;

}

@property (assign,nonatomic) double averageConfidenceScore;              //@synthesize averageConfidenceScore=_averageConfidenceScore - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                         //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) BOOL removeSpaceBefore; 
@property (nonatomic,readonly) BOOL removeSpaceAfter; 
+(BOOL)supportsSecureCoding;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(const CFStringRef)arg2 ;
-(NSArray *)tokens;
-(id)initWithTokens:(id)arg1 score:(double)arg2 ;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTokens:(id)arg1 ;
-(double)averageConfidenceScore;
-(void)setAverageConfidenceScore:(double)arg1 ;
-(id)description;
-(id)serializedInterpretationWithTransform:(const CFStringRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

