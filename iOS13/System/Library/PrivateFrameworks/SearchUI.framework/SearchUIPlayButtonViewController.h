/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIAccessoryViewController.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class SFPunchout, SearchUIButton, TLKLabel, NSString, NSArray, NSTimer, MPMediaEntity;

@interface SearchUIPlayButtonViewController : SearchUIAccessoryViewController <NUIContainerViewDelegate> {

	SFPunchout* _punchout;
	SearchUIButton* _playButton;
	TLKLabel* _captionLabel;
	NSString* _spotlightIdentifier;
	NSArray* _storeIdentifiers;
	NSTimer* _timer;
	MPMediaEntity* _mediaEntity;
	NSString* _universalLibraryID;
	long long _mediaEntityType;
	unsigned long long _persistentID;

}

@property (nonatomic,retain) SFPunchout * punchout;                        //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,retain) SearchUIButton * playButton;                  //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) TLKLabel * captionLabel;                      //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) NSString * spotlightIdentifier;               //@synthesize spotlightIdentifier=_spotlightIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * storeIdentifiers;                   //@synthesize storeIdentifiers=_storeIdentifiers - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                              //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) MPMediaEntity * mediaEntity;                  //@synthesize mediaEntity=_mediaEntity - In the implementation block
@property (nonatomic,retain) NSString * universalLibraryID;                //@synthesize universalLibraryID=_universalLibraryID - In the implementation block
@property (assign,nonatomic) long long mediaEntityType;                    //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (assign,nonatomic) unsigned long long persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)font;
+(BOOL)supportsRowModel:(id)arg1 ;
+(id)mediaEntityForAction:(id)arg1 ;
+(BOOL)mediaItem:(id)arg1 matchesUniversalLibraryID:(id)arg2 forType:(long long)arg3 ;
+(BOOL)mediaItem:(id)arg1 matchesPersistentID:(unsigned long long)arg2 forType:(long long)arg3 ;
+(id)_mediaEntityForUniversalLibraryID:(id)arg1 forType:(int)arg2 ;
+(id)_mediaEntityForPersistentID:(id)arg1 forType:(int)arg2 ;
-(void)dealloc;
-(unsigned long long)type;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(unsigned long long)persistentID;
-(void)setPersistentID:(unsigned long long)arg1 ;
-(void)play;
-(void)hide;
-(TLKLabel *)captionLabel;
-(void)setCaptionLabel:(TLKLabel *)arg1 ;
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(void)setMediaEntityType:(long long)arg1 ;
-(void)setUniversalLibraryID:(NSString *)arg1 ;
-(NSArray *)storeIdentifiers;
-(long long)mediaEntityType;
-(NSString *)universalLibraryID;
-(void)setStoreIdentifiers:(NSArray *)arg1 ;
-(void)setSpotlightIdentifier:(NSString *)arg1 ;
-(NSString *)spotlightIdentifier;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(SearchUIButton *)playButton;
-(void)setPlayButton:(SearchUIButton *)arg1 ;
-(void)updatePlayState;
-(MPMediaEntity *)mediaEntity;
-(void)togglePlaybackState;
-(id)setupView;
-(void)buttonPressed;
-(void)updateWithRowModel:(id)arg1 ;
-(void)invalidateTimerIfNeeded;
-(void)setMediaEntity:(MPMediaEntity *)arg1 ;
-(void)playbackStateDidChange;
-(void)nowPlayingItemDidChange;
-(BOOL)matchesNowPlayingAudioItem;
-(void)sendEngagementDidPunchout:(BOOL)arg1 ;
-(void)createTimerIfNeeded;
-(BOOL)updateTimerForPauseState;
-(void)updateButtonProgressAnimated:(BOOL)arg1 ;
-(BOOL)shouldTopAlignForAccessibilityContentSizes;
@end

