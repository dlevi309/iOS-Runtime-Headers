/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSString, ICPlayActivityEnqueuerProperties;

@interface MPCReportingIdentityProperties : NSObject {

	BOOL _hasSubscriptionPlaybackCapability;
	NSString* _householdID;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	ICPlayActivityEnqueuerProperties* _enqueuerProperties;

}

@property (nonatomic,copy) NSString * householdID;                                             //@synthesize householdID=_householdID - In the implementation block
@property (assign,nonatomic) unsigned long long storeAccountID;                                //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy) NSString * storeFrontID;                                            //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionPlaybackCapability;                           //@synthesize hasSubscriptionPlaybackCapability=_hasSubscriptionPlaybackCapability - In the implementation block
@property (nonatomic,copy) ICPlayActivityEnqueuerProperties * enqueuerProperties;              //@synthesize enqueuerProperties=_enqueuerProperties - In the implementation block
-(ICPlayActivityEnqueuerProperties *)enqueuerProperties;
-(NSString *)householdID;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(unsigned long long)storeAccountID;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(NSString *)storeFrontID;
-(void)setEnqueuerProperties:(ICPlayActivityEnqueuerProperties *)arg1 ;
-(void)setHouseholdID:(NSString *)arg1 ;
-(void)setHasSubscriptionPlaybackCapability:(BOOL)arg1 ;
-(BOOL)hasSubscriptionPlaybackCapability;
@end

