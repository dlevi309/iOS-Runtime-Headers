/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class SKUIStackedBar, NSString;

@interface SKUIStackedPopTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	double _split;
	SKUIStackedBar* _fromBar;
	SKUIStackedBar* _toBar;

}

@property (nonatomic,retain) SKUIStackedBar * fromBar;              //@synthesize fromBar=_fromBar - In the implementation block
@property (nonatomic,retain) SKUIStackedBar * toBar;                //@synthesize toBar=_toBar - In the implementation block
@property (assign,nonatomic) double split;                          //@synthesize split=_split - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(double)split;
-(SKUIStackedBar *)toBar;
-(SKUIStackedBar *)fromBar;
-(void)setSplit:(double)arg1 ;
-(void)setFromBar:(SKUIStackedBar *)arg1 ;
-(void)setToBar:(SKUIStackedBar *)arg1 ;
@end

