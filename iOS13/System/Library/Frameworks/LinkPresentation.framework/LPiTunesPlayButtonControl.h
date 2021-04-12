/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(void)startPlaying;
-(void)updatePlaybackState;
-(BOOL)matchesNowPlayingItem;
-(void)updatePlayState;
-(void)startListeningForPlayback;
-(void)stopListeningForPlayback;
-(MRSystemAppPlaybackQueueRef)createPlaybackQueue;
-(id)mediaPlaybackApplicationID;
-(id)initWithPlaybackInformation:(id)arg1 style:(id)arg2 ;
@end

