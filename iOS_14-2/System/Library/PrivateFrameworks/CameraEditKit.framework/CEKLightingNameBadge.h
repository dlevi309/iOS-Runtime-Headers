/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)_snapshotView;
-(void)_setSnapshotView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateText;
-(BOOL)isHighlighted;
-(long long)lightingType;
-(void)setLightingType:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateColorsAnimated:(BOOL)arg1 ;
@end

