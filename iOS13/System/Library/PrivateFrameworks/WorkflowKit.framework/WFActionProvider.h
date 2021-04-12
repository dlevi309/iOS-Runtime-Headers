/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFActionProviderDelegate;
@interface WFActionProvider : NSObject {

	id<WFActionProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFActionProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFActionProviderDelegate>)delegate;
-(void)setDelegate:(id<WFActionProviderDelegate>)arg1 ;
-(void)updateCache:(/*^block*/id)arg1 ;
-(id)availableActionIdentifiers;
-(void)createActionsForRequests:(id)arg1 ;
-(void)deleteCache;
-(id)createAllAvailableActions;
@end

