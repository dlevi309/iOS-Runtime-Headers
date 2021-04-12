/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSString, SSVPlayActivityEnqueuerProperties;

@interface MPCReportingIdentityProperties : NSObject {

	BOOL _hasSubscriptionPlaybackCapability;
	NSString* _householdID;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	SSVPlayActivityEnqueuerProperties* _enqueuerProperties;

}

@property (nonatomic,copy) NSString * householdID;                                              //@synthesize householdID=_householdID - In the implementation block
@property (assign,nonatomic) unsigned long long storeAccountID;                                 //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy) NSString * storeFrontID;                                             //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionPlaybackCapability;                            //@synthesize hasSubscriptionPlaybackCapability=_hasSubscriptionPlaybackCapability - In the implementation block
@property (nonatomic,copy) SSVPlayActivityEnqueuerProperties * enqueuerProperties;              //@synthesize enqueuerProperties=_enqueuerProperties - In the implementation block
-(unsigned long long)storeAccountID;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(NSString *)storeFrontID;
-(SSVPlayActivityEnqueuerProperties *)enqueuerProperties;
-(NSString *)householdID;
-(void)setEnqueuerProperties:(SSVPlayActivityEnqueuerProperties *)arg1 ;
-(void)setHouseholdID:(NSString *)arg1 ;
-(void)setHasSubscriptionPlaybackCapability:(BOOL)arg1 ;
-(BOOL)hasSubscriptionPlaybackCapability;
@end

