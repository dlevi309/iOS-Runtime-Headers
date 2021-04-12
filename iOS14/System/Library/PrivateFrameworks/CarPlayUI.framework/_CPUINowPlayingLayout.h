/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <libobjc.A.dylib/CPUINowPlayingLayoutProtocol.h>

@class NSString;

@interface _CPUINowPlayingLayout : NSObject <CPUINowPlayingLayoutProtocol> {

	BOOL _showsArtwork;
	double _displayScale;
	CGRect _safeAreaFrame;
	CGRect _viewAreaFrame;

}

@property (assign,nonatomic) CGRect safeAreaFrame;                  //@synthesize safeAreaFrame=_safeAreaFrame - In the implementation block
@property (assign,nonatomic) CGRect viewAreaFrame;                  //@synthesize viewAreaFrame=_viewAreaFrame - In the implementation block
@property (assign,nonatomic) double displayScale;                   //@synthesize displayScale=_displayScale - In the implementation block
@property (assign,nonatomic) BOOL showsArtwork;                     //@synthesize showsArtwork=_showsArtwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayScale:(double)arg1 ;
-(double)displayScale;
-(UIEdgeInsets)layoutMargins;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShowsArtwork:(BOOL)arg1 ;
-(BOOL)showsArtwork;
-(CGSize)maximumTitleViewSize;
-(id)initWithSafeArea:(CGRect)arg1 frame:(CGRect)arg2 displayScale:(double)arg3 showsArtwork:(BOOL)arg4 ;
-(CGRect)safeAreaFrame;
-(CGRect)viewAreaFrame;
-(unsigned long long)artworkPosition;
-(double)albumArtWidthMultiplier;
-(double)_scaledWidth;
-(double)_scaledHeight;
-(double)_effectiveAlbumArtWidth;
-(CGSize)maximumNowPlayingSize;
-(double)playModeControlButtonWidth;
-(double)playModeControlButtonSpacing;
-(BOOL)playModeControlButtonsFullWidth;
-(BOOL)progressViewFullWidth;
-(double)transportControlButtonHeight;
-(double)transportControlButtonSpacing;
-(unsigned long long)trackInfoFontStyle;
-(double)verticalEdgePadding;
-(void)setSafeAreaFrame:(CGRect)arg1 ;
-(void)setViewAreaFrame:(CGRect)arg1 ;
@end

