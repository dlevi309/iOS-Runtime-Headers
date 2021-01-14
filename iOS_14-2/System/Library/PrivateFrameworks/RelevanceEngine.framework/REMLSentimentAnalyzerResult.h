/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface REMLSentimentAnalyzerResult : NSObject {

	float _postivieSentiment;
	float _negativeSentiment;
	float _certainty;

}

@property (assign,nonatomic) float postivieSentiment;              //@synthesize postivieSentiment=_postivieSentiment - In the implementation block
@property (assign,nonatomic) float negativeSentiment;              //@synthesize negativeSentiment=_negativeSentiment - In the implementation block
@property (assign,nonatomic) float certainty;                      //@synthesize certainty=_certainty - In the implementation block
-(float)postivieSentiment;
-(float)negativeSentiment;
-(float)certainty;
-(void)setPostivieSentiment:(float)arg1 ;
-(void)setNegativeSentiment:(float)arg1 ;
-(void)setCertainty:(float)arg1 ;
@end

