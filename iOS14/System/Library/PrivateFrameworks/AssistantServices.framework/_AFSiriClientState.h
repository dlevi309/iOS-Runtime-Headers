/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSMutableSet;

@interface _AFSiriClientState : NSObject {

	NSMutableSet* _requestUUIDs;
	BOOL _hasActiveSession;
	BOOL _isListening;
	BOOL _isSpeaking;

}

@property (assign,nonatomic) BOOL hasActiveSession;                         //@synthesize hasActiveSession=_hasActiveSession - In the implementation block
@property (assign,nonatomic) BOOL isListening;                              //@synthesize isListening=_isListening - In the implementation block
@property (assign,nonatomic) BOOL isSpeaking;                               //@synthesize isSpeaking=_isSpeaking - In the implementation block
@property (nonatomic,readonly) unsigned long long notifyState; 
-(id)init;
-(BOOL)isListening;
-(BOOL)isSpeaking;
-(unsigned long long)notifyState;
-(void)setHasActiveSession:(BOOL)arg1 ;
-(void)addRequestUUID:(id)arg1 ;
-(void)removeRequestUUID:(id)arg1 ;
-(void)setIsListening:(BOOL)arg1 ;
-(void)setIsSpeaking:(BOOL)arg1 ;
-(BOOL)hasActiveSession;
@end

