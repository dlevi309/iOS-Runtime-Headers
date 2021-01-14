/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIBarButtonItem *)barButtonItem;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(UIView *)sourceView;
-(void)setSourceRect:(CGRect)arg1 ;
-(UIViewController *)viewController;
-(CGRect)sourceRect;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)presentViewController:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(BOOL)arg3 ;
@end

