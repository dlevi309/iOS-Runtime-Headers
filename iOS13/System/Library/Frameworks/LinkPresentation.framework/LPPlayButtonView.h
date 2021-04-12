/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/LPContentInsettable.h>

@class LPPlayButtonControl, LPInlineMediaPlaybackInformation, LPMusicPlayButtonStyle;

@interface LPPlayButtonView : LPComponentView <LPContentInsettable> {

	LPPlayButtonControl* _button;
	LPInlineMediaPlaybackInformation* _playbackInformation;
	UIEdgeInsets _contentInset;
	LPMusicPlayButtonStyle* _style;

}
-(void)dealloc;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)layoutComponentView;
-(id)initWithPlaybackInformation:(id)arg1 style:(id)arg2 ;
-(void)updateButton;
-(void)installiTunesButton;
-(void)installDisablediTunesButton;
-(void)installPlaceholderButton;
-(void)installPreviewButton;
-(void)installAudioButton;
-(void)updateButtonForSongOrAlbum;
-(void)updateButtonForPodcast;
-(void)updateButtonForRadio;
-(void)updateButtonForAudioBook;
-(void)updateButtonForAudioFile;
@end

