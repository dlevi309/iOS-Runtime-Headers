/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSSpeakerDetectorNDAPIDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class CSSpeakerModel;

@interface CSSpeakerDetectorNDAPI : NSObject {

	void* _novDetect;
	const ndresult* _lastResult;
	float _threshold;
	unsigned long long _maxSpeakerVectorsToPersist;
	CSSpeakerModel* _spkModel;
	id<CSSpeakerDetectorNDAPIDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSSpeakerDetectorNDAPIDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CSSpeakerDetectorNDAPIDelegate>)delegate;
-(void)setDelegate:(id<CSSpeakerDetectorNDAPIDelegate>)arg1 ;
-(void)reset;
-(unsigned long long)getSATVectorCount;
-(float)getRejectLoggingThreshold;
-(id)initWithAsset:(id)arg1 speakerModel:(id)arg2 ;
-(unsigned long long)getMaxSpeakerVectorsToPersist;
-(BOOL)addLastTriggerToProfileWithSuperVector:(id)arg1 ;
-(float)computeSATScore:(id)arg1 ;
-(float)getSatThreshold;
-(id)analyzeWavForEnrollment:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(BOOL)addLastTriggerToProfile;
-(BOOL)_initializeNDAPI:(id)arg1 resourcePath:(id)arg2 ;
-(BOOL)_initializeSAT:(id)arg1 ;
@end

