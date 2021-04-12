/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setShouldIgnoreAuthFailures:(BOOL)arg1 ;
-(void)setTargetedServices:(NSSet *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setShouldForceInteractiveAuth:(BOOL)arg1 ;
-(BOOL)shouldForceInteractiveAuth;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(NSSet *)targetedServices;
-(BOOL)shouldIgnoreAuthFailures;
@end

