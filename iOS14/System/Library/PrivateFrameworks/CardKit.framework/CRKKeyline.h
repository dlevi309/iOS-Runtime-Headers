/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)direction;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)type;
-(id)initWithType:(long long)arg1 direction:(long long)arg2 visualEffectStyle:(unsigned long long)arg3 ;
-(id)_keylineColorForVisualEffectStyle:(unsigned long long)arg1 ;
-(double)_roundedKeylineThickness;
-(double)defaultKeylineInsetForCurrentDevice;
-(unsigned long long)visualEffectStyle;
@end

