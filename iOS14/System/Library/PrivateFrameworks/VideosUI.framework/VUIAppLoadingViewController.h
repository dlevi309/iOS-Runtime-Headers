/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>

@class VUIAppSpinnerView, UIView;

@interface VUIAppLoadingViewController : UIViewController {

	VUIAppSpinnerView* _loadingView;
	UIView* _parentView;
	UIView* _principalView;
	BOOL _cancelLoading;
	BOOL _loading;

}

@property (assign,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
-(void)setLoading:(BOOL)arg1 ;
-(void)setView:(id)arg1 ;
-(BOOL)loading;
@end

