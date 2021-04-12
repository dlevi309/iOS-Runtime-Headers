/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setAlpha:(double)arg1 ;
-(void)dealloc;
-(void)dismissAlert;
-(void)showWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAcmAlertViewDelegate:(id<acmAlertViewDelegateProtocol>)arg1 ;
-(id<acmAlertViewDelegateProtocol>)acmAlertViewDelegate;
@end

