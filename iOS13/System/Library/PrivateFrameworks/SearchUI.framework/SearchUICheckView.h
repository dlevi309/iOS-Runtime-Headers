/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface SearchUICheckView : UIView {

	CAShapeLayer* _checkLayer;

}

@property (nonatomic,retain) CAShapeLayer * checkLayer;              //@synthesize checkLayer=_checkLayer - In the implementation block
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(CAShapeLayer *)checkLayer;
-(void)setCheckLayer:(CAShapeLayer *)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
@end

