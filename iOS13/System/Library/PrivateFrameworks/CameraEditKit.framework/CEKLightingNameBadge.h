/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <CameraEditKit/CEKBadgeTextView.h>

@class UIView;

@interface CEKLightingNameBadge : CEKBadgeTextView {

	BOOL _highlighted;
	long long _lightingType;
	UIView* __snapshotView;

}

@property (setter=_setSnapshotView:,nonatomic,retain) UIView * _snapshotView;              //@synthesize _snapshotView=__snapshotView - In the implementation block
@property (assign,nonatomic) long long lightingType;                                       //@synthesize lightingType=_lightingType - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                        //@synthesize highlighted=_highlighted - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)_snapshotView;
-(void)_updateText;
-(void)_setSnapshotView:(id)arg1 ;
-(void)_updateColorsAnimated:(BOOL)arg1 ;
-(long long)lightingType;
-(void)setLightingType:(long long)arg1 ;
@end

