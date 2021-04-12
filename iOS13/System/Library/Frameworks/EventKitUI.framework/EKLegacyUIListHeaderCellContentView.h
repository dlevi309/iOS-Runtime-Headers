/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface EKLegacyUIListHeaderCellContentView : UIView {

	double _date;
	BOOL _indentsForDots;
	BOOL _showWeekNumber;

}

@property (assign,nonatomic) BOOL showWeekNumber;              //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
@property (assign,nonatomic) double date; 
@property (assign,nonatomic) BOOL indentsForDots; 
-(double)date;
-(void)setDate:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(void)setIndentsForDots:(BOOL)arg1 ;
-(BOOL)indentsForDots;
-(BOOL)showWeekNumber;
-(CGRect)_rectForOffetTextShadow:(CGRect)arg1 ;
-(id)_normalTextColor;
-(id)_normalTextShadowColor;
-(void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(CGRect)arg4 ;
-(id)_weekNumberFont;
@end

