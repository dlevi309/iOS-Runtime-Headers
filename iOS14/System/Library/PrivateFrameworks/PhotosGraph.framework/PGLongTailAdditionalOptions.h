/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@interface PGLongTailAdditionalOptions : NSObject {

	unsigned long long _qualityPercentile;
	unsigned long long _verifiedPersonScoreValue;
	unsigned long long _topTierAestheticScoreValue;

}

@property (assign,nonatomic) unsigned long long qualityPercentile;                       //@synthesize qualityPercentile=_qualityPercentile - In the implementation block
@property (assign,nonatomic) unsigned long long verifiedPersonScoreValue;                //@synthesize verifiedPersonScoreValue=_verifiedPersonScoreValue - In the implementation block
@property (assign,nonatomic) unsigned long long topTierAestheticScoreValue;              //@synthesize topTierAestheticScoreValue=_topTierAestheticScoreValue - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)qualityPercentile;
-(void)setQualityPercentile:(unsigned long long)arg1 ;
-(unsigned long long)verifiedPersonScoreValue;
-(void)setVerifiedPersonScoreValue:(unsigned long long)arg1 ;
-(unsigned long long)topTierAestheticScoreValue;
-(void)setTopTierAestheticScoreValue:(unsigned long long)arg1 ;
@end

