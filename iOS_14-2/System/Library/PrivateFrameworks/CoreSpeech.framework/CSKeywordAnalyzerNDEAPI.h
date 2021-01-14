/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSKeywordAnalyzerNDEAPIScoreDelegate;
@class NSMutableData;

@interface CSKeywordAnalyzerNDEAPI : NSObject {

	void* _ndeObject;
	NSMutableData* _currentBlob;
	unsigned long long _activeChannel;
	id<CSKeywordAnalyzerNDEAPIScoreDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long activeChannel;                                      //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic,__weak) id<CSKeywordAnalyzerNDEAPIScoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CSKeywordAnalyzerNDEAPIScoreDelegate>)delegate;
-(unsigned long long)activeChannel;
-(void)setDelegate:(id<CSKeywordAnalyzerNDEAPIScoreDelegate>)arg1 ;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(void)reset;
-(id)processAudioChunk:(id)arg1 ;
-(void)dealloc;
-(id)initWithBlob:(id)arg1 ;
-(id)checkForTriggerWithBytes:(const short*)arg1 withNumberOfSamples:(long long)arg2 ;
-(id)processAudioBytes:(void*)arg1 withNumberOfSamples:(long long)arg2 ;
@end

