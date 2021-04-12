/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIButton.h>

@protocol MKPlaceAttributionCellButtonDelegate;
@interface MKPlaceAttributionCellButton : UIButton {

	BOOL _highlighted;
	id<MKPlaceAttributionCellButtonDelegate> _buttonDelegate;

}

@property (assign,nonatomic,__weak) id<MKPlaceAttributionCellButtonDelegate> buttonDelegate;              //@synthesize buttonDelegate=_buttonDelegate - In the implementation block
-(id<MKPlaceAttributionCellButtonDelegate>)buttonDelegate;
-(void)setButtonDelegate:(id<MKPlaceAttributionCellButtonDelegate>)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
@end

