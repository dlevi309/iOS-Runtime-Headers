/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDate:(double)arg1 ;
-(void)setShowWeekNumber:(BOOL)arg1 ;
-(void)setIndentsForDots:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)indentsForDots;
-(BOOL)showWeekNumber;
-(CGRect)_rectForOffetTextShadow:(CGRect)arg1 ;
-(id)_normalTextColor;
-(id)_normalTextShadowColor;
-(void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(CGRect)arg4 ;
-(id)_weekNumberFont;
-(double)date;
@end

