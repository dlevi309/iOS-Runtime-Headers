/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSLock, NSXPCListenerEndpoint, NSObject;

@interface PRPersonaStore : NSObject {

	NSXPCConnection* _personaServiceConnection;
	NSLock* _connectionLock;
	NSLock* _dataVendingFlagLock;
	BOOL _hasVendedData;
	NSXPCListenerEndpoint* _serviceListenerEndpoint;
	NSObject*<OS_dispatch_queue> _replyHandlingQueue;

}

@property (nonatomic,readonly) BOOL hasVendedData; 
-(id)init;
-(void)dealloc;
-(void)currentLikenessForPrimaryiCloudAccountWithDesiredFreshness:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)allLikenessesForPrimaryiCloudAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)likenessForEmailAddress:(id)arg1 desiredFreshness:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)likenessForPhoneNumber:(id)arg1 desiredFreshness:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(/*^block*/id)arg2 ;
-(void)changeCurrentSelfLikenessToLikenessWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(/*^block*/id)arg2 ;
-(void)removeAllLikenessForPrimaryiCloudAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)donateLikeness:(id)arg1 forEmailAddress:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)donateLikeness:(id)arg1 forPhoneNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)likenessesWithExternalIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAppleIDEvent:(unsigned long long)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)screenNameForPrimaryiCloudAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)screenNameForAppleIDWithAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)screenNameForEmailAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)screenNameForPhoneNumber:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setScreenName:(id)arg1 forAppleIDWithAltDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setScreenName:(id)arg1 forPrimaryiCloudAccountWithCompletion:(/*^block*/id)arg2 ;
-(id)initWithServiceListenerEndpoint:(id)arg1 ;
-(void)_startListeningForCacheChangeNotifications;
-(void)_stopListeningForCacheChangeNotifications;
-(void)_setHasVendedData:(BOOL)arg1 ;
-(BOOL)hasVendedData;
-(void)currentLikenessForPrimaryiCloudAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)likenessForPhoneNumber:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)likenessForEmailAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(/*^block*/id)arg2 ;
-(unsigned char)likenessVersionDigestForEmail:(id)arg1 ;
-(unsigned char)likenessVersionDigestForPhoneNumber:(id)arg1 ;
-(void)setLikenessVersionDigest:(unsigned char)arg1 forEmail:(id)arg2 ;
-(void)setLikenessVersionDigest:(unsigned char)arg1 forPhoneNumber:(id)arg2 ;
-(id)likenessDataForPropagationToRecipient:(id)arg1 lastContactDate:(id)arg2 ;
-(void)donateLikenessData:(id)arg1 forSenderID:(id)arg2 isPhoneNumber:(BOOL)arg3 ;
-(id)likenessWithUniqueID:(id)arg1 ;
@end

