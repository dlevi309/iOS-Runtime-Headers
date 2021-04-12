/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIStoreFPSKeyLoaderDelegate.h>

@class TVPStateMachine, NSMutableArray, NSMutableSet, NSString;

@interface VUISecureInvalidationManager : NSObject <VUIStoreFPSKeyLoaderDelegate> {

	BOOL _networkErrorOccurredDuringInvalidation;
	TVPStateMachine* _stateMachine;
	NSMutableArray* _keyLoaders;
	NSMutableSet* _penaltyBox;
	unsigned long long _backgroundTaskIdentifier;

}

@property (nonatomic,retain) TVPStateMachine * stateMachine;                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyLoaders;                              //@synthesize keyLoaders=_keyLoaders - In the implementation block
@property (nonatomic,retain) NSMutableSet * penaltyBox;                                //@synthesize penaltyBox=_penaltyBox - In the implementation block
@property (assign,nonatomic) BOOL networkErrorOccurredDuringInvalidation;              //@synthesize networkErrorOccurredDuringInvalidation=_networkErrorOccurredDuringInvalidation - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskIdentifier;              //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(TVPStateMachine *)stateMachine;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)backgroundTaskIdentifier;
-(NSMutableSet *)penaltyBox;
-(void)setPenaltyBox:(NSMutableSet *)arg1 ;
-(void)_registerStateMachineHandlers;
-(BOOL)storeFPSKeyLoader:(id)arg1 shouldKeyRequestContinueInvalidationAfterLoadingNonce:(id)arg2 ;
-(void)invalidateKeysForDeletedVideos;
-(void)removeDeletionInfoFromPenaltyBox:(id)arg1 ;
-(void)_networkReachbilityDidChange:(id)arg1 ;
-(BOOL)_validateParamsForDeletionInfo:(id)arg1 ;
-(void)_sendInvalidationRequestsForDeletionInfoArrays:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendInvalidationRequestsForFirstArray:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_getParamsForDeletionInfo:(id)arg1 keyServerURL:(id*)arg2 nonceURL:(id*)arg3 keyIdentifier:(id*)arg4 offlineKeyData:(id*)arg5 dsid:(id*)arg6 additionalRequestParams:(id*)arg7 contentID:(id*)arg8 ;
-(NSMutableArray *)keyLoaders;
-(id)_invalidateKeysForDeletedVideos;
-(void)setNetworkErrorOccurredDuringInvalidation:(BOOL)arg1 ;
-(BOOL)networkErrorOccurredDuringInvalidation;
-(void)setKeyLoaders:(NSMutableArray *)arg1 ;
@end

