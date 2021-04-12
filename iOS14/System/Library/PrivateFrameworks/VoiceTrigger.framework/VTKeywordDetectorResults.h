/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@class VTKeywordDetectorPhraseScore, NSArray;

@interface VTKeywordDetectorResults : NSObject {

	VTKeywordDetectorPhraseScore* _bestResult;
	NSArray* _nBestResults;

}

@property (nonatomic,retain) VTKeywordDetectorPhraseScore * bestResult;              //@synthesize bestResult=_bestResult - In the implementation block
@property (nonatomic,retain) NSArray * nBestResults;                                 //@synthesize nBestResults=_nBestResults - In the implementation block
-(NSArray *)nBestResults;
-(id)initWithResultArray:(id)arg1 ;
-(unsigned long long)_getBestResultIdx:(id)arg1 ;
-(VTKeywordDetectorPhraseScore *)bestResult;
-(void)setBestResult:(VTKeywordDetectorPhraseScore *)arg1 ;
-(void)setNBestResults:(NSArray *)arg1 ;
@end

