/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIView.h>

@protocol MKQuickLinkItemViewDelegate;
@class _MKUILabel, MKVibrantView, UIImageView, NSArray, NSLayoutConstraint, GEOQuickLink, GEOAppStoreAppClip;

@interface MKQuickLinkItemView : UIView {

	_MKUILabel* _label;
	_MKUILabel* _appLabel;
	MKVibrantView* _vibrantView;
	UIImageView* _appImageView;
	NSArray* _constraints;
	NSLayoutConstraint* _topToFirstBaseline;
	NSLayoutConstraint* _lastToFirstBaseline;
	NSLayoutConstraint* _lastToBotomBaseline;
	BOOL _touched;
	id<MKQuickLinkItemViewDelegate> _delegate;
	GEOQuickLink* _quickLink;
	GEOAppStoreAppClip* _appClip;

}

@property (assign,nonatomic,__weak) id<MKQuickLinkItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOQuickLink * quickLink;                                     //@synthesize quickLink=_quickLink - In the implementation block
@property (nonatomic,retain) GEOAppStoreAppClip * appClip;                                 //@synthesize appClip=_appClip - In the implementation block
@property (assign,nonatomic) BOOL touched;                                                 //@synthesize touched=_touched - In the implementation block
+(id)labelFont;
+(id)appLabelFont;
+(id)widthDictionary;
+(double)widthBrandItem;
+(double)minWidthForString:(id)arg1 forSize:(id)arg2 ;
-(GEOQuickLink *)quickLink;
-(void)_loadAppClip;
-(void)_loadFallBackApp;
-(id<MKQuickLinkItemViewDelegate>)delegate;
-(void)_loadAppClipArtwork:(id)arg1 bundleID:(id)arg2 ;
-(void)setAppClip:(GEOAppStoreAppClip *)arg1 ;
-(void)_loadOfficialApp;
-(void)_loadAppArtwork:(id)arg1 ;
-(void)_createConstraints;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touched;
-(GEOAppStoreAppClip *)appClip;
-(void)setDelegate:(id<MKQuickLinkItemViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)setQuickLink:(GEOQuickLink *)arg1 ;
-(void)infoCardThemeChanged;
-(id)initWithQuickLink:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_contentSizeDidChange;
-(void)updateColor;
-(void)setTouched:(BOOL)arg1 ;
@end

