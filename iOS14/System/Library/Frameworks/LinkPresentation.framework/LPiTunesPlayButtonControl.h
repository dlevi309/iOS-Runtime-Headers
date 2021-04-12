/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPPlayButtonControl.h>

@class LPInlineMediaPlaybackInformation, NSTimer, MPModelGenericObject;

@interface LPiTunesPlayButtonControl : LPPlayButtonControl {

	LPInlineMediaPlaybackInformation* _playbackInformation;
	NSTimer* _playbackStateUpdateTimer;
	MPModelGenericObject* _enqueuedItem;
	MPModelGenericObject* _enqueuedItemContext;
	double _currentPlaybackPosition;
	BOOL _currentlyPlaying;
	BOOL _hasStartedPlaying;

}
-(void)buttonPressed:(id)arg1 ;
-(void)updatePlaybackState;
-(BOOL)matchesNowPlayingItem;
-(void)updatePlayState;
-(void)startListeningForPlayback;
-(void)stopListeningForPlayback;
-(MRSystemAppPlaybackQueueRef)createPlaybackQueue;
-(id)mediaPlaybackApplicationID;
-(id)initWithPlaybackInformation:(id)arg1 style:(id)arg2 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)startPlaying;
@end

