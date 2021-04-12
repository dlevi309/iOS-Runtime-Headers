/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFHandleIntentAction, NSString;

@interface WFIntentHandlerResource : WFResource <WFActionEventObserver> {

	BOOL _requiresIntentSupport;
	WFHandleIntentAction* _action;

}

@property (assign,nonatomic,__weak) WFHandleIntentAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL requiresIntentSupport;                      //@synthesize requiresIntentSupport=_requiresIntentSupport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFHandleIntentAction *)action;
-(void)setAction:(WFHandleIntentAction *)arg1 ;
-(void)refreshAvailability;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)setupWithAction:(id)arg1 ;
-(BOOL)requiresIntentSupport;
@end

