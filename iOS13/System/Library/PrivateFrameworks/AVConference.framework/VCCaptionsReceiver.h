/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class VCCaptionsTranscription;

@interface VCCaptionsReceiver : NSObject {

	unsigned _captionsLastUtteranceNumber;
	unsigned _captionsLastUpdateNumber;
	id _delegate;
	VCCaptionsTranscription* _currentTranscription;

}

@property (readonly) id<VCCaptionsReceiverDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VCCaptionsTranscription * currentTranscription;              //@synthesize currentTranscription=_currentTranscription - In the implementation block
-(void)dealloc;
-(id<VCCaptionsReceiverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)processCaptionsData:(id)arg1 ;
-(void)setCurrentTranscription:(VCCaptionsTranscription *)arg1 ;
-(VCCaptionsTranscription *)currentTranscription;
@end

