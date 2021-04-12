/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUITapCommand.h>
#import <libobjc.A.dylib/ATXActionSearchResultExecutionDelegate.h>

@class ATXActionSearchResultExecution, NSString;

@interface SearchUIShortcutExecutableCommand : SearchUITapCommand <ATXActionSearchResultExecutionDelegate> {

	/*^block*/id _commandCompletion;
	ATXActionSearchResultExecution* _actionExecution;

}

@property (nonatomic,copy) id commandCompletion;                                            //@synthesize commandCompletion=_commandCompletion - In the implementation block
@property (nonatomic,retain) ATXActionSearchResultExecution * actionExecution;              //@synthesize actionExecution=_actionExecution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 environment:(id)arg2 ;
-(void)performCommandWithCompletion:(/*^block*/id)arg1 ;
-(void)setCommandCompletion:(id)arg1 ;
-(void)setActionExecution:(ATXActionSearchResultExecution *)arg1 ;
-(ATXActionSearchResultExecution *)actionExecution;
-(id)commandCompletion;
-(void)actionSearchResultExecution:(id)arg1 didDismissRemoteAlertWithReason:(long long)arg2 actionCompleted:(BOOL)arg3 withResult:(long long)arg4 shouldClearAction:(BOOL)arg5 ;
-(BOOL)shouldDeselectPreviousSelection;
-(unsigned long long)destination;
-(void)dealloc;
@end

