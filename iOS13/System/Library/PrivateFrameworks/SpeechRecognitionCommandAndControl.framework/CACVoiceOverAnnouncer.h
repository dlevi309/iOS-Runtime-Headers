/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, CACVoiceOverAnnouncement;

@interface CACVoiceOverAnnouncer : NSObject {

	NSObject*<OS_dispatch_queue> _announcerQueue;
	BOOL _shouldInterruptCurrentAnnouncement;
	NSMutableArray* _voiceOverAnnouncementQueue;
	CACVoiceOverAnnouncement* _currentAnnouncement;

}

@property (nonatomic,retain) NSMutableArray * voiceOverAnnouncementQueue;                 //@synthesize voiceOverAnnouncementQueue=_voiceOverAnnouncementQueue - In the implementation block
@property (nonatomic,retain) CACVoiceOverAnnouncement * currentAnnouncement;              //@synthesize currentAnnouncement=_currentAnnouncement - In the implementation block
@property (assign,nonatomic) BOOL shouldInterruptCurrentAnnouncement;                     //@synthesize shouldInterruptCurrentAnnouncement=_shouldInterruptCurrentAnnouncement - In the implementation block
-(id)init;
-(void)_didFinishAnnouncement:(id)arg1 ;
-(NSMutableArray *)voiceOverAnnouncementQueue;
-(CACVoiceOverAnnouncement *)currentAnnouncement;
-(BOOL)shouldInterruptCurrentAnnouncement;
-(void)_dequeueNextAnnouncement;
-(void)setShouldInterruptCurrentAnnouncement:(BOOL)arg1 ;
-(void)setCurrentAnnouncement:(CACVoiceOverAnnouncement *)arg1 ;
-(void)announceMessage:(id)arg1 type:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)prepareForImmediateAnnouncement;
-(void)setVoiceOverAnnouncementQueue:(NSMutableArray *)arg1 ;
@end

