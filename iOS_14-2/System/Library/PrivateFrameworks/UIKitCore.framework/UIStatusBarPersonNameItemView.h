/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarPersonNameItemView : UIStatusBarItemView {

	NSString* _personNameString;
	double _letterSpacing;
	double _maxWidth;

}
-(BOOL)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2 ;
-(double)standardPadding;
-(long long)legibilityStyle;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)extraRightPadding;
-(id)accessibilityHUDRepresentation;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
@end

