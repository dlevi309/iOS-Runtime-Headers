/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIView.h>

@protocol MKActionRowItemViewDelegate;
@class _MKUILabel, UIImageView, MKVibrantView, UIView, NSArray, MKPlaceCardActionItem;

@interface MKActionRowItemView : UIView {

	_MKUILabel* _label;
	UIImageView* _glyphImageView;
	MKVibrantView* _vibrantView;
	UIView* _backgroundView;
	unsigned long long _style;
	NSArray* _constraints;
	BOOL _enabled;
	BOOL _touched;
	BOOL _fullWidthMode;
	BOOL _highlighted;
	id<MKActionRowItemViewDelegate> _delegate;
	MKPlaceCardActionItem* _actionRowItem;

}

@property (assign,nonatomic,__weak) id<MKActionRowItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * actionRowItem;                        //@synthesize actionRowItem=_actionRowItem - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                 //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL touched;                                                 //@synthesize touched=_touched - In the implementation block
@property (assign,nonatomic) BOOL fullWidthMode;                                           //@synthesize fullWidthMode=_fullWidthMode - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                             //@synthesize highlighted=_highlighted - In the implementation block
+(id)labelFont;
+(id)glyphFont;
+(id)widthDictionary;
+(double)widthBrandItem;
+(double)minWidthForString:(id)arg1 forSize:(id)arg2 ;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id<MKActionRowItemViewDelegate>)delegate;
-(void)setDelegate:(id<MKActionRowItemViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(void)updateImage;
-(void)_touchBegan;
-(void)_contentSizeDidChange;
-(void)createConstraints;
-(void)infoCardThemeChanged;
-(void)updateColor;
-(void)setTouched:(BOOL)arg1 ;
-(BOOL)touched;
-(void)setActionRowItem:(MKPlaceCardActionItem *)arg1 ;
-(void)_touchCancelled;
-(void)_touchEnded;
-(id)initWithActionRowItem:(id)arg1 style:(unsigned long long)arg2 ;
-(void)setFullWidthMode:(BOOL)arg1 ;
-(MKPlaceCardActionItem *)actionRowItem;
-(BOOL)fullWidthMode;
@end

