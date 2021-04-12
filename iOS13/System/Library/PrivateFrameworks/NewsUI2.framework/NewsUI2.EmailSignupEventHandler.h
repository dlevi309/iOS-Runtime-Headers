/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/TSEmailSignupEventHandlerType.h>

@interface NewsUI2.EmailSignupEventHandler : _UKNOWN_SUPERCLASS_ <TSEmailSignupEventHandlerType> {

	 delegate;
	 interactor;
	 router;

}

@property (assign,__weak,nonatomic) id<TSEmailSignupEventHandlerTypeDelegate> delegate; 
-(id<TSEmailSignupEventHandlerTypeDelegate>)delegate;
-(void)setDelegate:(id<TSEmailSignupEventHandlerTypeDelegate>)arg1 ;
-(void)emailSignUpViewControllerSignUpButtonTapped;
-(void)emailSignUpViewControllerNotNowButtonTapped;
-(void)viewAppeared;
@end

