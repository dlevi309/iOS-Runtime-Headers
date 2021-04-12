/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol UIViewControllerPreviewing;
@class UIStoryboardPreviewingSegueTemplateStorage, UIViewController, UIView, NSString;

@interface UIStoryboardPreviewingRegistrant : NSObject <NSCoding, UIViewControllerPreviewingDelegate> {

	id<UIViewControllerPreviewing> _previewingContext;
	UIStoryboardPreviewingSegueTemplateStorage* _segueTemplateStorage;
	UIViewController* _viewController;
	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                            //@synthesize sourceView=_sourceView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)registerForPreviewing;
-(void)unregisterForPreviewing;
@end

