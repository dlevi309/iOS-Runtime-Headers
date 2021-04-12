/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPNowPlayingClientTemplateDelegate.h>

@class NSArray, NSString, CARObserverHashTable, NAFuture;

@interface CPNowPlayingTemplate : CPTemplate <CPNowPlayingClientTemplateDelegate> {

	BOOL _upNextButtonEnabled;
	BOOL _albumArtistButtonEnabled;
	NSArray* _nowPlayingButtons;
	NSString* _upNextTitle;
	CARObserverHashTable* _nowPlayingObservers;

}

@property (nonatomic,retain) CARObserverHashTable * nowPlayingObservers;                                   //@synthesize nowPlayingObservers=_nowPlayingObservers - In the implementation block
@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (nonatomic,readonly) NSArray * nowPlayingButtons;                                                //@synthesize nowPlayingButtons=_nowPlayingButtons - In the implementation block
@property (assign,getter=isUpNextButtonEnabled,nonatomic) BOOL upNextButtonEnabled;                        //@synthesize upNextButtonEnabled=_upNextButtonEnabled - In the implementation block
@property (nonatomic,copy) NSString * upNextTitle;                                                         //@synthesize upNextTitle=_upNextTitle - In the implementation block
@property (assign,getter=isAlbumArtistButtonEnabled,nonatomic) BOOL albumArtistButtonEnabled;              //@synthesize albumArtistButtonEnabled=_albumArtistButtonEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)sharedTemplate;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUpNextButtonEnabled:(BOOL)arg1 ;
-(void)setAlbumArtistButtonEnabled:(BOOL)arg1 ;
-(void)updateNowPlayingButtons:(id)arg1 ;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(id)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(id)trailingNavigationBarButtons;
-(void)upNextButtonTapped;
-(void)albumArtistButtonTapped;
-(NSArray *)nowPlayingButtons;
-(BOOL)isUpNextButtonEnabled;
-(BOOL)isAlbumArtistButtonEnabled;
-(NSString *)upNextTitle;
-(CARObserverHashTable *)nowPlayingObservers;
-(id)_updateLowerRegionButtons:(id)arg1 ;
-(void)_updateNowPlayingTemplate;
-(void)handleAction:(long long)arg1 forControlIdentifier:(id)arg2 ;
-(void)setUpNextTitle:(NSString *)arg1 ;
-(void)setNowPlayingObservers:(CARObserverHashTable *)arg1 ;
@end

