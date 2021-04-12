/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMVisionFeatureAestheticsResult : NSObject <NSSecureCoding> {

	float _aestheticScore;
	float _wellFramedSubjectScore;
	float _pleasantCompositionScore;
	float _wellChosenBackgroundScore;
	float _noiseScore;
	float _failureScore;

}

@property (nonatomic,readonly) float aestheticScore;                         //@synthesize aestheticScore=_aestheticScore - In the implementation block
@property (nonatomic,readonly) float wellFramedSubjectScore;                 //@synthesize wellFramedSubjectScore=_wellFramedSubjectScore - In the implementation block
@property (nonatomic,readonly) float pleasantCompositionScore;               //@synthesize pleasantCompositionScore=_pleasantCompositionScore - In the implementation block
@property (nonatomic,readonly) float wellChosenBackgroundScore;              //@synthesize wellChosenBackgroundScore=_wellChosenBackgroundScore - In the implementation block
@property (nonatomic,readonly) float noiseScore;                             //@synthesize noiseScore=_noiseScore - In the implementation block
@property (nonatomic,readonly) float failureScore;                           //@synthesize failureScore=_failureScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)aestheticScore;
-(float)wellFramedSubjectScore;
-(float)wellChosenBackgroundScore;
-(float)noiseScore;
-(float)failureScore;
-(float)pleasantCompositionScore;
-(id)initWithVisionAestheticsObservation:(id)arg1 ;
@end

