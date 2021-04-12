/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSUserActivity, INCExtensionRequest, INIntent, INIntentResponse, NSString, INCExtensionTransactionState;

@interface INCExtensionTransaction : NSObject {

	NSMutableDictionary* _userActivitiesByIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _donateInteraction;
	BOOL _shouldResetRequestAfterHandle;
	NSUserActivity* _currentUserActivity;
	INCExtensionRequest* _request;
	INIntent* _currentIntent;
	INIntentResponse* _currentIntentResponse;
	NSString* _groupIdentifier;
	INCExtensionTransactionState* _state;

}

@property (setter=_setCurrentIntent:,nonatomic,retain) INIntent * currentIntent;                                      //@synthesize currentIntent=_currentIntent - In the implementation block
@property (setter=_setCurrentIntentResponse:,nonatomic,retain) INIntentResponse * currentIntentResponse;              //@synthesize currentIntentResponse=_currentIntentResponse - In the implementation block
@property (nonatomic,readonly) BOOL donateInteraction;                                                                //@synthesize donateInteraction=_donateInteraction - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                                                       //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) INCExtensionRequest * request;                                                         //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSUserActivity * currentUserActivity;                                             //@synthesize currentUserActivity=_currentUserActivity - In the implementation block
@property (nonatomic,retain) INCExtensionTransactionState * state;                                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL shouldResetRequestAfterHandle;                                                      //@synthesize shouldResetRequestAfterHandle=_shouldResetRequestAfterHandle - In the implementation block
+(void)initialize;
-(id)description;
-(INCExtensionTransactionState *)state;
-(NSString *)groupIdentifier;
-(void)setState:(INCExtensionTransactionState *)arg1 ;
-(INCExtensionRequest *)request;
-(id)initWithIntent:(id)arg1 donateInteraction:(BOOL)arg2 groupIdentifier:(id)arg3 ;
-(BOOL)donateInteraction;
-(NSUserActivity *)currentUserActivity;
-(id)userActivityWithIdentifier:(id)arg1 ;
-(INIntentResponse *)currentIntentResponse;
-(void)_updateCurrentUserActivityForType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3 ;
-(void)_addUserActivities:(id)arg1 ;
-(INIntent *)currentIntent;
-(void)_setCurrentIntent:(id)arg1 ;
-(void)_setCurrentIntentResponse:(id)arg1 ;
-(BOOL)shouldResetRequestAfterHandle;
-(void)setShouldResetRequestAfterHandle:(BOOL)arg1 ;
@end

