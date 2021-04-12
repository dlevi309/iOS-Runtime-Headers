/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIView.h>

@protocol MKQuickLinkItemViewDelegate;
@class _MKUILabel, MKVibrantView, UIImageView, NSArray, NSLayoutConstraint, GEOQuickLink;

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

}

@property (assign,nonatomic,__weak) id<MKQuickLinkItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOQuickLink * quickLink;                                     //@synthesize quickLink=_quickLink - In the implementation block
@property (assign,nonatomic) BOOL touched;                                                 //@synthesize touched=_touched - In the implementation block
+(id)labelFont;
+(id)widthDictionary;
+(id)appLabelFont;
+(double)widthBrandItem;
+(double)minWidthForString:(id)arg1 forSize:(id)arg2 ;
-(id<MKQuickLinkItemViewDelegate>)delegate;
-(void)setDelegate:(id<MKQuickLinkItemViewDelegate>)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)_createConstraints;
-(void)_contentSizeDidChange;
-(GEOQuickLink *)quickLink;
-(id)initWithQuickLink:(id)arg1 ;
-(void)setQuickLink:(GEOQuickLink *)arg1 ;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(void)infoCardThemeChanged;
-(void)_loadOfficialApp;
-(void)_loadAppArtwork:(id)arg1 adamID:(id)arg2 ;
-(void)updateColor;
-(void)setTouched:(BOOL)arg1 ;
-(BOOL)touched;
@end

