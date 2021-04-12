/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class UIViewController, UIView, UIBarButtonItem;

@interface SKUIContextActionsPresentationSource : NSObject {

	UIViewController* _viewController;
	UIView* _sourceView;
	UIBarButtonItem* _barButtonItem;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                            //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                              //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                //@synthesize barButtonItem=_barButtonItem - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)presentViewController:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(BOOL)arg3 ;
@end

