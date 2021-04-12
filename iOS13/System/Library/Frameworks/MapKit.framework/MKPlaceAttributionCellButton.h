/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIButton.h>

@protocol MKPlaceAttributionCellButtonDelegate;
@interface MKPlaceAttributionCellButton : UIButton {

	BOOL _highlighted;
	id<MKPlaceAttributionCellButtonDelegate> _buttonDelegate;

}

@property (assign,nonatomic,__weak) id<MKPlaceAttributionCellButtonDelegate> buttonDelegate;              //@synthesize buttonDelegate=_buttonDelegate - In the implementation block
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(id<MKPlaceAttributionCellButtonDelegate>)buttonDelegate;
-(void)setButtonDelegate:(id<MKPlaceAttributionCellButtonDelegate>)arg1 ;
@end

