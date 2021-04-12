/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol _SFPopoverSourceInfo;
@class UIPopoverPresentationController, NSString;

@interface _SFPopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate> {

	id<_SFPopoverSourceInfo> _sourceInfo;
	UIPopoverPresentationController* _popoverPresentationController;
	BOOL _popoverUsesAdaptivePresentationInCompact;

}

@property (assign,nonatomic) BOOL popoverUsesAdaptivePresentationInCompact;              //@synthesize popoverUsesAdaptivePresentationInCompact=_popoverUsesAdaptivePresentationInCompact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToURLOutlineInNavigationBar:(id)arg2 usesAdaptivePresentationInCompact:(BOOL)arg3 ;
+(void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToReloadButtonInNavigationBar:(id)arg2 ;
+(void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToURLOutlineInNavigationBar:(id)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)initWithSourceInfo:(id)arg1 ;
-(void)setPopoverUsesAdaptivePresentationInCompact:(BOOL)arg1 ;
-(void)attachToPopoverPresentationController:(id)arg1 ;
-(void)updatePopoverPosition;
-(BOOL)popoverUsesAdaptivePresentationInCompact;
@end

