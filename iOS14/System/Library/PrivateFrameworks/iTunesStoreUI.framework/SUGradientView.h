/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)drawRect:(CGRect)arg1 ;
-(void)setGradient:(SUGradient *)arg1 ;
-(SUGradient *)gradient;
-(void)dealloc;
@end

