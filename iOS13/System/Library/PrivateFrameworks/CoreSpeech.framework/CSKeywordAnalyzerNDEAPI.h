/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<CSKeywordAnalyzerNDEAPIScoreDelegate>)delegate;
-(void)setDelegate:(id<CSKeywordAnalyzerNDEAPIScoreDelegate>)arg1 ;
-(void)reset;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(id)initWithBlob:(id)arg1 ;
-(void)processAudioChunk:(id)arg1 ;
-(void)checkForTriggerWithBytes:(const short*)arg1 withNumberOfSamples:(long long)arg2 ;
-(void)processAudioBytes:(void*)arg1 withNumberOfSamples:(long long)arg2 ;
@end

