/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKAudioControllerDelegate.h>

@protocol CKFullScreenEffectDelegate;
@class CKAudioController, NSString, CKMessagePartChatItem;

@interface CKFullScreenEffect : NSObject <CKAudioControllerDelegate> {

	CKAudioController* _audioController;
	float _currentVolume;
	char messageOrientation;
	BOOL _triggeredByResponseKit;
	NSString* _identifier;
	CKMessagePartChatItem* _triggeringChatItem;
	id<CKFullScreenEffectDelegate> _delegate;

}

@property (assign,nonatomic) BOOL triggeredByResponseKit;                                 //@synthesize triggeredByResponseKit=_triggeredByResponseKit - In the implementation block
@property (assign,nonatomic) char messageOrientation; 
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CKMessagePartChatItem * triggeringChatItem;                  //@synthesize triggeringChatItem=_triggeringChatItem - In the implementation block
@property (assign,nonatomic,__weak) id<CKFullScreenEffectDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_monochromeDimmingFilterWithType:(int)arg1 ;
+(id)bigEmojiFilter;
+(id)tapBackFilter;
+(id)stickerFilter;
-(void)dealloc;
-(id<CKFullScreenEffectDelegate>)delegate;
-(void)setDelegate:(id<CKFullScreenEffectDelegate>)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)duration;
-(unsigned long long)layerCount;
-(id)backgroundColor;
-(BOOL)effectIsDark;
-(CKMessagePartChatItem *)triggeringChatItem;
-(void)setMessageOrientation:(char)arg1 ;
-(void)setTriggeredByResponseKit:(BOOL)arg1 ;
-(void)setTriggeringChatItem:(CKMessagePartChatItem *)arg1 ;
-(void)prepareSoundEffect;
-(void)stopSoundEffect;
-(void)applyMessageFiltersToCells:(id)arg1 ;
-(void)applyMessageFiltersToTriggeringCell:(id)arg1 ;
-(Class)effectViewClass;
-(BOOL)isForegroundEffect;
-(BOOL)shouldDrawOverNavigationBar;
-(void)playSoundEffect;
-(void)clearMessageFiltersFromCells:(id)arg1 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioController:(id)arg1 didPrepareMediaObjectToPlay:(id)arg2 successfully:(BOOL)arg3 ;
-(int)_filterTypeForCell:(id)arg1 caresAboutOrientation:(BOOL*)arg2 orientation:(char*)arg3 ;
-(id)messageFilters;
-(void)animateFiltersForCell:(id)arg1 ;
-(BOOL)_supportsSoundEffects;
-(id)soundEffectFileURL;
-(BOOL)soundEffectHasHapticTrack;
-(void)_audioSessionOptionsWillChange:(id)arg1 ;
-(void)_didPrepareSoundEffect;
-(void)_ensureAudioPlayer;
-(char)messageOrientation;
-(BOOL)triggeredByResponseKit;
@end

