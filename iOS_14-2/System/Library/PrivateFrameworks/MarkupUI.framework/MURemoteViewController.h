/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canResignFirstResponder;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(long long)sandboxExtensionHandle;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLoad;
-(void)serviceDidFinishwithResults:(id)arg1 andSandboxExtension:(id)arg2 ;
-(void)setShouldResignFirstResponder:(BOOL)arg1 ;
-(BOOL)shouldResignFirstResponder;
-(id)finishedWithResultsCompletionBlock;
-(void)beginDismissWithInfo:(id)arg1 ;
-(void)setFinishedWithResultsCompletionBlock:(id)arg1 ;
@end

