/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarPersonNameItemView : UIStatusBarItemView {

	NSString* _personNameString;
	double _letterSpacing;
	double _maxWidth;

}
-(id)accessibilityHUDRepresentation;
-(double)standardPadding;
-(long long)legibilityStyle;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(BOOL)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2 ;
@end

