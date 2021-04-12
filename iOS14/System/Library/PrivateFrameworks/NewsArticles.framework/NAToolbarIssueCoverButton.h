/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIButton.h>

@interface NAToolbarIssueCoverButton : UIButton {

	 coverView;
	 highlightView;
	 highlightColor;

}

@property (assign,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
+(void)updateBarButtonItemWidth:(id)arg1 in:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isHighlighted;
-(CGRect)accessibilityFrame;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

