/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIControl, UIView;

@interface _MKSmallCalloutPassthroughButton : UIControl {

	UIControl* _targetControl;
	UIView* _highlightView;

}

@property (nonatomic,retain) UIControl * targetControl;              //@synthesize targetControl=_targetControl - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)setTargetControl:(UIControl *)arg1 ;
-(UIControl *)targetControl;
@end

