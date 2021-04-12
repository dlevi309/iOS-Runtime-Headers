/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <CardKit/CardKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CRKKeyline : UIView {

	UIView* _keylineView;
	long long _type;
	long long _direction;
	unsigned long long _visualEffectStyle;

}

@property (readonly) long long type;                                    //@synthesize type=_type - In the implementation block
@property (readonly) long long direction;                               //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long visualEffectStyle;              //@synthesize visualEffectStyle=_visualEffectStyle - In the implementation block
-(long long)type;
-(long long)direction;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithType:(long long)arg1 direction:(long long)arg2 visualEffectStyle:(unsigned long long)arg3 ;
-(id)_keylineColorForVisualEffectStyle:(unsigned long long)arg1 ;
-(double)_roundedKeylineThickness;
-(double)defaultKeylineInsetForCurrentDevice;
-(unsigned long long)visualEffectStyle;
@end

