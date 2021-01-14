/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue, CSBeepCancellerDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject, NSDictionary;

@interface CSBeepCanceller : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller> >* _beepCanceller;
	vector<float, std::__1::allocator<float> >* _beepFloatVec;
	vector<float, std::__1::allocator<float> >* _floatBuffer;
	vector<short, std::__1::allocator<short> >* _shortBuffer;
	unsigned long long _numTotalInputSamples;
	unsigned long long _numTotalOutputSamples;
	id<CSBeepCancellerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSBeepCancellerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * metrics; 
-(void)flush;
-(NSDictionary *)metrics;
-(id)init;
-(id<CSBeepCancellerDelegate>)delegate;
-(void)setDelegate:(id<CSBeepCancellerDelegate>)arg1 ;
-(void)reset;
-(void)willBeep;
-(void)cancelBeepFromSamples:(id)arg1 timestamp:(unsigned long long)arg2 ;
@end

