/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIButton.h>

@protocol MKActionRowItemViewDelegate;
@class _MKUILabel, UIImageView, MKVibrantView, UIView, NSArray, MKPlaceCardActionItem;

@interface MKActionRowItemView : UIButton {

	_MKUILabel* _label;
	UIImageView* _glyphImageView;
	MKVibrantView* _vibrantView;
	UIView* _backgroundView;
	unsigned long long _style;
	NSArray* _constraints;
	BOOL _touched;
	BOOL _fullWidthMode;
	BOOL _hovering;
	BOOL _showSelectedState;
	id<MKActionRowItemViewDelegate> _delegate;
	MKPlaceCardActionItem* _actionRowItem;

}

@property (assign,nonatomic,__weak) id<MKActionRowItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * actionRowItem;                        //@synthesize actionRowItem=_actionRowItem - In the implementation block
@property (assign,nonatomic) BOOL touched;                                                 //@synthesize touched=_touched - In the implementation block
@property (assign,nonatomic) BOOL fullWidthMode;                                           //@synthesize fullWidthMode=_fullWidthMode - In the implementation block
@property (assign,nonatomic) BOOL hovering;                                                //@synthesize hovering=_hovering - In the implementation block
@property (assign,nonatomic) BOOL showSelectedState;                                       //@synthesize showSelectedState=_showSelectedState - In the implementation block
+(id)labelFont;
+(id)glyphFont;
+(id)widthDictionary;
+(double)widthBrandItem;
+(double)minWidthForString:(id)arg1 forSize:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)tintColorDidChange;
-(void)updateImage;
-(id<MKActionRowItemViewDelegate>)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)hovering;
-(BOOL)touched;
-(void)setDelegate:(id<MKActionRowItemViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)infoCardThemeChanged;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_contentSizeDidChange;
-(void)_touchBegan;
-(void)createConstraints;
-(void)handlePress;
-(void)updateColor;
-(void)setHovering:(BOOL)arg1 ;
-(void)setActionRowItem:(MKPlaceCardActionItem *)arg1 ;
-(void)setShowSelectedState:(BOOL)arg1 ;
-(void)handleHoverGesture:(id)arg1 ;
-(BOOL)showSelectedState;
-(void)setTouched:(BOOL)arg1 ;
-(void)_touchCancelled;
-(void)_touchEnded;
-(id)initWithActionRowItem:(id)arg1 menuElement:(id)arg2 style:(unsigned long long)arg3 ;
-(void)setFullWidthMode:(BOOL)arg1 ;
-(MKPlaceCardActionItem *)actionRowItem;
-(BOOL)fullWidthMode;
-(void)dealloc;
@end

