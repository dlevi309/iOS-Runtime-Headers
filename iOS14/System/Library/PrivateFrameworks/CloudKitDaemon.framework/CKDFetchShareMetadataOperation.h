/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSMutableArray, NSMutableDictionary, NSSet, NSDictionary;

@interface CKDFetchShareMetadataOperation : CKDOperation {

	BOOL _forceDSRefetch;
	BOOL _errorOnOON;
	BOOL _shouldFetchRootRecord;
	BOOL _clientWillDisplaySystemAcceptPrompt;
	/*^block*/id _shareMetadataFetchedBlock;
	NSMutableArray* _shareURLsToFetch;
	NSMutableDictionary* _shareTokenMetadatasToFetchByURL;
	NSSet* _rootRecordDesiredKeysSet;
	NSDictionary* _shareInvitationTokensByShareURL;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSMutableArray * shareURLsToFetch;                                                    //@synthesize shareURLsToFetch=_shareURLsToFetch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareTokenMetadatasToFetchByURL;                                //@synthesize shareTokenMetadatasToFetchByURL=_shareTokenMetadatasToFetchByURL - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchRootRecord;                                                           //@synthesize shouldFetchRootRecord=_shouldFetchRootRecord - In the implementation block
@property (nonatomic,retain) NSSet * rootRecordDesiredKeysSet;                                                     //@synthesize rootRecordDesiredKeysSet=_rootRecordDesiredKeysSet - In the implementation block
@property (assign,nonatomic) BOOL clientWillDisplaySystemAcceptPrompt;                                             //@synthesize clientWillDisplaySystemAcceptPrompt=_clientWillDisplaySystemAcceptPrompt - In the implementation block
@property (nonatomic,retain) NSDictionary * shareInvitationTokensByShareURL;                                       //@synthesize shareInvitationTokensByShareURL=_shareInvitationTokensByShareURL - In the implementation block
@property (nonatomic,retain) id<CKFetchShareMetadataOperationCallbacks> clientOperationCallbackProxy; 
@property (assign,nonatomic) BOOL forceDSRefetch;                                                                  //@synthesize forceDSRefetch=_forceDSRefetch - In the implementation block
@property (assign,nonatomic) BOOL errorOnOON;                                                                      //@synthesize errorOnOON=_errorOnOON - In the implementation block
@property (nonatomic,copy) id shareMetadataFetchedBlock;                                                           //@synthesize shareMetadataFetchedBlock=_shareMetadataFetchedBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(BOOL)makeStateTransition;
-(void)setShareURLsToFetch:(NSMutableArray *)arg1 ;
-(NSMutableArray *)shareURLsToFetch;
-(BOOL)shouldFetchRootRecord;
-(void)setShouldFetchRootRecord:(BOOL)arg1 ;
-(NSDictionary *)shareInvitationTokensByShareURL;
-(void)setShareInvitationTokensByShareURL:(NSDictionary *)arg1 ;
-(void)setErrorOnOON:(BOOL)arg1 ;
-(void)setShareMetadataFetchedBlock:(id)arg1 ;
-(void)_prepareShortTokens;
-(void)_fetchShortTokenMetadata;
-(BOOL)errorOnOON;
-(NSMutableDictionary *)shareTokenMetadatasToFetchByURL;
-(id)shareMetadataFetchedBlock;
-(BOOL)forceDSRefetch;
-(void)setForceDSRefetch:(BOOL)arg1 ;
-(NSSet *)rootRecordDesiredKeysSet;
-(void)_handleTokenResolveWithLookupInfo:(id)arg1 shareMetadata:(id)arg2 responseCode:(id)arg3 urlByShortTokenLookupInfos:(id)arg4 tokensToFetchByURL:(id)arg5 ;
-(void)_performCallbackForURL:(id)arg1 withMetadata:(id)arg2 error:(id)arg3 ;
-(id)_decodeProtectedFullToken:(id)arg1 tokenMetadata:(id)arg2 ;
-(void)_continueSharePCSPrepForShareMetadata:(id)arg1 shareURL:(id)arg2 ;
-(void)_prepPPPCSDataForDugongShareMetadata:(id)arg1 withInvitationToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_continueHandlingFetchedShareMetadata:(id)arg1 shareURL:(id)arg2 ;
-(void)_decryptRootRecordsForShareURL:(id)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_currentUserIsOONForShareMetadata:(id)arg1 ;
-(void)setShareTokenMetadatasToFetchByURL:(NSMutableDictionary *)arg1 ;
-(void)setRootRecordDesiredKeysSet:(NSSet *)arg1 ;
-(BOOL)clientWillDisplaySystemAcceptPrompt;
-(void)setClientWillDisplaySystemAcceptPrompt:(BOOL)arg1 ;
@end

