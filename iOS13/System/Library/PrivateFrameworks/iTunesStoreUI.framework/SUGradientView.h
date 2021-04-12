/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SUGradient;

@interface SUGradientView : UIView {

	CGGradientRef _cgGradient;
	SUGradient* _gradient;

}

@property (nonatomic,copy) SUGradient * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setGradient:(SUGradient *)arg1 ;
-(SUGradient *)gradient;
@end

