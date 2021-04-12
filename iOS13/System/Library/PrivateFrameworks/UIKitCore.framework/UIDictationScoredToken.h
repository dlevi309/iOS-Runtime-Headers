/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIDictationToken.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIDictationScoredToken : UIDictationToken <NSSecureCoding> {

	double _confidenceScore;

}

@property (nonatomic,readonly) double confidenceScore;              //@synthesize confidenceScore=_confidenceScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidenceScore;
-(id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3 confidenceScore:(double)arg4 ;
-(id)_descriptionExtra;
@end

