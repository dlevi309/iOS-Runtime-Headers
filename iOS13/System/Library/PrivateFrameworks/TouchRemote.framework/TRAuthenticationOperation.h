/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TROperation.h>

@class NSSet, UIViewController;

@interface TRAuthenticationOperation : TROperation {

	BOOL _shouldIgnoreAuthFailures;
	BOOL _shouldForceInteractiveAuth;
	NSSet* _targetedServices;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) NSSet * targetedServices;                                 //@synthesize targetedServices=_targetedServices - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreAuthFailures;                            //@synthesize shouldIgnoreAuthFailures=_shouldIgnoreAuthFailures - In the implementation block
@property (assign,nonatomic) BOOL shouldForceInteractiveAuth;                          //@synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(void)execute;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setShouldForceInteractiveAuth:(BOOL)arg1 ;
-(void)setShouldIgnoreAuthFailures:(BOOL)arg1 ;
-(void)setTargetedServices:(NSSet *)arg1 ;
-(BOOL)shouldForceInteractiveAuth;
-(NSSet *)targetedServices;
-(BOOL)shouldIgnoreAuthFailures;
@end

