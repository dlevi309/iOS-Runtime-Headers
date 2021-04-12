/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/ICAction.h>

@class ICScheme, NSString;

@interface ICSchemeAction : ICAction {

	ICScheme* _scheme;

}

@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,__weak,readonly) ICScheme * scheme;                                 //@synthesize scheme=_scheme - In the implementation block
@property (getter=isCallbackAction,nonatomic,readonly) BOOL callbackAction; 
-(ICScheme *)scheme;
-(NSString *)formatString;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)initWithDefinition:(id)arg1 scheme:(id)arg2 ;
-(id)formatKeys;
-(BOOL)isCallbackAction;
-(id)defersCompletionUntilReturn;
@end

