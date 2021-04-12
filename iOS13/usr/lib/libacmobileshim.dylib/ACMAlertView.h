/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <UIKitCore/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface ACMAlertView : UIAlertView <UIAlertViewDelegate> {

	id _acmAlertViewDelegate;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) id<acmAlertViewDelegateProtocol> acmAlertViewDelegate;              //@synthesize acmAlertViewDelegate=_acmAlertViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)dismissAlert;
-(void)showWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAcmAlertViewDelegate:(id<acmAlertViewDelegateProtocol>)arg1 ;
-(id<acmAlertViewDelegateProtocol>)acmAlertViewDelegate;
@end

