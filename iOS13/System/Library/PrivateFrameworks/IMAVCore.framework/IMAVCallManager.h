/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/


@class IMPowerAssertion, NSMutableArray, NSMutableDictionary, NSDate, NSArray;

@interface IMAVCallManager : NSObject {

	IMPowerAssertion* _powerAssertion;
	NSMutableArray* _chatArray;
	NSMutableArray* _acChatProxyArray;
	NSMutableArray* _avChatProxyArray;
	NSMutableDictionary* _guidToACChatProxyMap;
	NSMutableDictionary* _guidToAVChatProxyMap;
	NSDate* _lastCallStateChange;
	int _avToken;
	int _acToken;
	unsigned _avCallState;
	unsigned _acCallState;
	unsigned _globalCallState;

}

@property (nonatomic,readonly) NSArray * _FTCalls; 
@property (nonatomic,readonly) unsigned callState; 
@property (nonatomic,readonly) BOOL hasActiveCall; 
@property (nonatomic,readonly) NSArray * calls; 
+(id)sharedInstance;
-(id)init;
-(NSArray *)calls;
-(unsigned)callState;
-(unsigned)_callState;
-(BOOL)hasActiveCall;
-(id)_calls;
-(BOOL)_hasActiveFaceTimeCall;
-(void)_updateACChatProxyWithInfo:(id)arg1 ;
-(void)_updateAVChatProxyWithInfo:(id)arg1 ;
-(void)_updateOverallChatState;
-(void)_addIMAVChatToChatList:(id)arg1 ;
-(void)_addAVChatProxy:(id)arg1 ;
-(void)_addACChatProxy:(id)arg1 ;
-(void)_removeIMAVChatFromChatList:(id)arg1 ;
-(void)_sendProxyUpdate;
-(BOOL)_hasActiveAudioCall;
-(void)_updateAVCallState;
-(void)_updateACCallState;
-(void)_setAVCallState:(unsigned)arg1 ;
-(void)_setACCallState:(unsigned)arg1 ;
-(void)_setAVCallState:(unsigned)arg1 quietly:(BOOL)arg2 ;
-(void)_setACCallState:(unsigned)arg1 quietly:(BOOL)arg2 ;
-(NSArray *)_FTCalls;
-(id)_mutableFTCalls;
-(id)_copyMutableFTCalls;
-(void)_postStateChangeNamed:(id)arg1 fromState:(unsigned)arg2 toState:(unsigned)arg3 postType:(BOOL)arg4 type:(unsigned)arg5 ;
-(void)_postStateChangeIfNecessary;
-(unsigned)_callStateForType:(unsigned)arg1 ;
-(id)_nonRetainingChatList;
-(id)_activeFaceTimeCall;
-(id)_activeAudioCall;
@end

