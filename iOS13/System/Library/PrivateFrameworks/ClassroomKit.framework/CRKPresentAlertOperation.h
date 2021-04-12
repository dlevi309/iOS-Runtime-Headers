/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@class UIAlertController, NSString, UIViewController;

@interface CRKPresentAlertOperation : CATOperation {

	UIAlertController* mAlertController;
	NSString* _acknowledgeOptionTitle;
	NSString* _message;
	UIViewController* _presentingViewController;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * acknowledgeOptionTitle;                               //@synthesize acknowledgeOptionTitle=_acknowledgeOptionTitle - In the implementation block
@property (nonatomic,readonly) NSString * message;                                              //@synthesize message=_message - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)main;
-(BOOL)isAsynchronous;
-(NSString *)title;
-(NSString *)message;
-(UIViewController *)presentingViewController;
-(NSString *)acknowledgeOptionTitle;
-(id)initWithPresentingViewController:(id)arg1 title:(id)arg2 message:(id)arg3 acknowledgeOptionTitle:(id)arg4 ;
@end

