/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding> {

	BOOL _shouldEvaluateColorInformation;
	long long _sampleFrequency;
	double _colorDistanceTheshold;

}

@property (assign,nonatomic) long long sampleFrequency;                        //@synthesize sampleFrequency=_sampleFrequency - In the implementation block
@property (assign,nonatomic) BOOL shouldEvaluateColorInformation;              //@synthesize shouldEvaluateColorInformation=_shouldEvaluateColorInformation - In the implementation block
@property (assign,nonatomic) double colorDistanceTheshold;                     //@synthesize colorDistanceTheshold=_colorDistanceTheshold - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(BOOL)requiresVisionFramework;
-(BOOL)shouldEvaluateColorInformation;
-(void)_evaluateColorInformation:(id)arg1 ;
-(id)_blurValueForVisionObservation:(id)arg1 ;
-(id)_brightnessValueForVisionObservation:(id)arg1 ;
-(long long)sampleFrequency;
-(void)setSampleFrequency:(long long)arg1 ;
-(void)setShouldEvaluateColorInformation:(BOOL)arg1 ;
-(double)colorDistanceTheshold;
-(void)setColorDistanceTheshold:(double)arg1 ;
@end

