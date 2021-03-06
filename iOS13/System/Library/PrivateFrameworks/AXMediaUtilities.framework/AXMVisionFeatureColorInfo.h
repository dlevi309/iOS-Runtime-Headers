/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AXMVisionFeatureColorInfo : NSObject <NSSecureCoding> {

	double _remainingColorWeight;
	NSArray* _mainColors;
	NSArray* _mainColorWeights;

}

@property (nonatomic,retain) NSArray * mainColors;                     //@synthesize mainColors=_mainColors - In the implementation block
@property (nonatomic,retain) NSArray * mainColorWeights;               //@synthesize mainColorWeights=_mainColorWeights - In the implementation block
@property (assign,nonatomic) double remainingColorWeight;              //@synthesize remainingColorWeight=_remainingColorWeight - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMainColors:(id)arg1 weights:(id)arg2 ;
-(NSArray *)mainColors;
-(NSArray *)mainColorWeights;
-(void)setMainColors:(NSArray *)arg1 ;
-(void)setMainColorWeights:(NSArray *)arg1 ;
-(void)enumerateMainColors:(/*^block*/id)arg1 ;
-(double)remainingColorWeight;
-(void)setRemainingColorWeight:(double)arg1 ;
@end

