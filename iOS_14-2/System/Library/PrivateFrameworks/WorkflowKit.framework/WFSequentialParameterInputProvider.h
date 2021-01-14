/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFSequentialParameterInputProviderDelegate;
@class WFAction, NSMutableOrderedSet, NSDictionary, NSMutableDictionary;

@interface WFSequentialParameterInputProvider : NSObject {

	id<WFSequentialParameterInputProviderDelegate> _delegate;
	WFAction* _fakeAction;
	NSMutableOrderedSet* _queuedParameters;
	NSDictionary* _defaultStates;
	NSMutableDictionary* _inputtedStates;

}

@property (nonatomic,retain) WFAction * fakeAction;                                                       //@synthesize fakeAction=_fakeAction - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * queuedParameters;                                      //@synthesize queuedParameters=_queuedParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultStates;                                                //@synthesize defaultStates=_defaultStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inputtedStates;                                        //@synthesize inputtedStates=_inputtedStates - In the implementation block
@property (assign,nonatomic,__weak) id<WFSequentialParameterInputProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFSequentialParameterInputProviderDelegate>)delegate;
-(void)setDelegate:(id<WFSequentialParameterInputProviderDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)startWithAction:(id)arg1 parameters:(id)arg2 defaultStates:(id)arg3 ;
-(void)askForParameterIfAvailable;
-(WFAction *)fakeAction;
-(void)setFakeAction:(WFAction *)arg1 ;
-(NSMutableOrderedSet *)queuedParameters;
-(void)setQueuedParameters:(NSMutableOrderedSet *)arg1 ;
-(NSDictionary *)defaultStates;
-(void)setDefaultStates:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)inputtedStates;
-(void)setInputtedStates:(NSMutableDictionary *)arg1 ;
@end

