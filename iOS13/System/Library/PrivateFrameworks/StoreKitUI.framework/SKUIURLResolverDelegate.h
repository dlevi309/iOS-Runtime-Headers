/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIURLResolverDelegate <NSObject>
@optional
-(BOOL)URLResolver:(id)arg1 shouldPerformDefaultActionForURL:(id)arg2;
-(void)URLResolver:(id)arg1 didFinishWithResult:(BOOL)arg2;

@required
-(id)presentationViewControllerForURLResolver:(id)arg1;
-(void)URLResolver:(id)arg1 showURL:(id)arg2 withTabIdentifier:(id)arg3;
-(void)URLResolver:(id)arg1 showTransientViewController:(id)arg2;

@end

