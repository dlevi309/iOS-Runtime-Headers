/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MURemoteViewProtocol.h>

@class NSString;

@interface MURemoteViewController : _UIRemoteViewController <MURemoteViewProtocol> {

	BOOL _shouldResignFirstResponder;
	/*^block*/id _finishedWithResultsCompletionBlock;
	long long _sandboxExtensionHandle;

}

@property (assign) long long sandboxExtensionHandle;                           //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (assign) BOOL shouldResignFirstResponder;                            //@synthesize shouldResignFirstResponder=_shouldResignFirstResponder - In the implementation block
@property (nonatomic,copy) id finishedWithResultsCompletionBlock;              //@synthesize finishedWithResultsCompletionBlock=_finishedWithResultsCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(long long)sandboxExtensionHandle;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(void)serviceDidFinishwithResults:(id)arg1 andSandboxExtension:(id)arg2 ;
-(void)setShouldResignFirstResponder:(BOOL)arg1 ;
-(BOOL)shouldResignFirstResponder;
-(id)finishedWithResultsCompletionBlock;
-(void)beginDismissWithInfo:(id)arg1 ;
-(void)setFinishedWithResultsCompletionBlock:(id)arg1 ;
@end

