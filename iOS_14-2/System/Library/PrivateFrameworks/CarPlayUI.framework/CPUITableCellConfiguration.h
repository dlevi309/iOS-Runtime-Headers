/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <libobjc.A.dylib/CPUITableCellConfigurationProtocol.h>

@class NSString, CPUITableCellAccessory, UIImage;

@interface CPUITableCellConfiguration : NSObject <CPUITableCellConfigurationProtocol> {

	BOOL _showExplicit;
	BOOL _shouldShowPlaybackProgress;
	BOOL _currentlyPlaying;
	BOOL _showActivityIndicator;
	BOOL _playingIndicatorLeadingSide;
	NSString* _text;
	NSString* _detailText;
	CPUITableCellAccessory* _accessory;
	UIImage* _image;
	double _playbackProgress;

}

@property (nonatomic,copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * detailText;                             //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) CPUITableCellAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL showExplicit;                               //@synthesize showExplicit=_showExplicit - In the implementation block
@property (assign,nonatomic) double playbackProgress;                         //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlaybackProgress;                 //@synthesize shouldShowPlaybackProgress=_shouldShowPlaybackProgress - In the implementation block
@property (assign,nonatomic) BOOL currentlyPlaying;                           //@synthesize currentlyPlaying=_currentlyPlaying - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                      //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL playingIndicatorLeadingSide;                //@synthesize playingIndicatorLeadingSide=_playingIndicatorLeadingSide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(BOOL)arg4 accessory:(id)arg5 showActivityIndicator:(BOOL)arg6 showPlaybackProgress:(BOOL)arg7 playbackProgress:(double)arg8 currentlyPlaying:(BOOL)arg9 playingIndicatorLeadingSide:(BOOL)arg10 ;
+(id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(BOOL)arg4 accessory:(id)arg5 showActivityIndicator:(BOOL)arg6 showPlaybackProgress:(BOOL)arg7 playbackProgress:(double)arg8 currentlyPlaying:(BOOL)arg9 ;
-(void)setImage:(UIImage *)arg1 ;
-(CPUITableCellAccessory *)accessory;
-(void)setText:(NSString *)arg1 ;
-(double)playbackProgress;
-(void)setPlaybackProgress:(double)arg1 ;
-(UIImage *)image;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setAccessory:(CPUITableCellAccessory *)arg1 ;
-(void)setCurrentlyPlaying:(BOOL)arg1 ;
-(BOOL)showActivityIndicator;
-(NSString *)detailText;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(BOOL)currentlyPlaying;
-(void)setShowExplicit:(BOOL)arg1 ;
-(void)setShouldShowPlaybackProgress:(BOOL)arg1 ;
-(void)setPlayingIndicatorLeadingSide:(BOOL)arg1 ;
-(BOOL)showExplicit;
-(BOOL)shouldShowPlaybackProgress;
-(BOOL)playingIndicatorLeadingSide;
@end

