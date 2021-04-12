/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_addAVChatProxy:(id)arg1 ;
-(void)_removeIMAVChatFromChatList:(id)arg1 ;
-(BOOL)hasActiveCall;
-(id)init;
-(void)_setACCallState:(unsigned)arg1 quietly:(BOOL)arg2 ;
-(void)_updateAVCallState;
-(void)_setAVCallState:(unsigned)arg1 quietly:(BOOL)arg2 ;
-(void)_setACCallState:(unsigned)arg1 ;
-(id)_activeFaceTimeCall;
-(NSArray *)_FTCalls;
-(id)_activeAudioCall;
-(void)_postStateChangeNamed:(id)arg1 fromState:(unsigned)arg2 toState:(unsigned)arg3 postType:(BOOL)arg4 type:(unsigned)arg5 ;
-(id)_mutableFTCalls;
-(void)_postStateChangeIfNecessary;
-(unsigned)_callStateForType:(unsigned)arg1 ;
-(void)_addIMAVChatToChatList:(id)arg1 ;
-(void)_setAVCallState:(unsigned)arg1 ;
-(void)_addACChatProxy:(id)arg1 ;
-(id)_calls;
-(void)_updateACChatProxyWithInfo:(id)arg1 ;
-(unsigned)callState;
-(id)_nonRetainingChatList;
-(id)_copyMutableFTCalls;
-(void)_sendProxyUpdate;
-(BOOL)_hasActiveFaceTimeCall;
-(void)_updateOverallChatState;
-(void)_updateAVChatProxyWithInfo:(id)arg1 ;
-(NSArray *)calls;
-(BOOL)_hasActiveAudioCall;
-(void)_updateACCallState;
-(unsigned)_callState;
@end

