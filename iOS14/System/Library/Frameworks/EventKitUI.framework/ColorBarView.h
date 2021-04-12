/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIView.h>

@class UIColor;

@interface ColorBarView : UIView {

	BOOL _hasRoundedCorners;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                     //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL hasRoundedCorners;              //@synthesize hasRoundedCorners=_hasRoundedCorners - In the implementation block
-(BOOL)hasRoundedCorners;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setHasRoundedCorners:(BOOL)arg1 cornerRadius:(double)arg2 ;
-(void)setHasRoundedCorners:(BOOL)arg1 ;
@end

