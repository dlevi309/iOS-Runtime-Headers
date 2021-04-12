/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIDictationToken.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIDictationScoredToken : UIDictationToken <NSSecureCoding> {

	double _confidenceScore;

}

@property (nonatomic,readonly) double confidenceScore;              //@synthesize confidenceScore=_confidenceScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3 confidenceScore:(double)arg4 ;
-(double)confidenceScore;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_descriptionExtra;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

