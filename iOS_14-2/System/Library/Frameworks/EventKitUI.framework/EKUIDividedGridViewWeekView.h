/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSLayoutConstraint;

@interface EKUIDividedGridViewWeekView : UIView {

	NSMutableArray* _buttonViews;
	NSLayoutConstraint* _heightConstraint;

}

@property (retain) NSMutableArray * buttonViews;                       //@synthesize buttonViews=_buttonViews - In the implementation block
@property (__weak) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(NSMutableArray *)buttonViews;
-(id)init;
-(void)setButtonViews:(NSMutableArray *)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

