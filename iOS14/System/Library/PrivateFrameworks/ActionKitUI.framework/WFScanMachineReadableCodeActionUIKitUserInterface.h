/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFScanMachineReadableCodeActionUserInterface.h>

@class UINavigationController, NSString;

@interface WFScanMachineReadableCodeActionUIKitUserInterface : WFActionUserInterface <WFScanMachineReadableCodeActionUserInterface> {

	/*^block*/id _completionHandler;
	UINavigationController* _navigationController;

}

@property (nonatomic,copy) id completionHandler;                                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(UINavigationController *)navigationController;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)finishWithCode:(id)arg1 error:(id)arg2 ;
@end

