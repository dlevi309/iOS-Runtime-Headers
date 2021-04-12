/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setView:(id)arg1 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
@end

