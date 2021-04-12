/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, FCNetworkBehaviorMonitor;

@interface FCCKContentDatabase : NSObject {

	BOOL _isProductionEnvironment;
	BOOL _shouldUseCloudd;
	BOOL _shouldUseSecureConnectionForCKAssetURLs;
	BOOL _shouldBypassCDNForCKAssetURLs;
	NSString* _containerIdentifier;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;

}

@property (nonatomic,copy,readonly) NSString * containerIdentifier;                            //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isProductionEnvironment;                                   //@synthesize isProductionEnvironment=_isProductionEnvironment - In the implementation block
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseCloudd;                                           //@synthesize shouldUseCloudd=_shouldUseCloudd - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSecureConnectionForCKAssetURLs;                     //@synthesize shouldUseSecureConnectionForCKAssetURLs=_shouldUseSecureConnectionForCKAssetURLs - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassCDNForCKAssetURLs;                               //@synthesize shouldBypassCDNForCKAssetURLs=_shouldBypassCDNForCKAssetURLs - In the implementation block
-(id)init;
-(void)addOperation:(id)arg1 ;
-(NSString *)containerIdentifier;
-(id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(BOOL)arg2 networkBehaviorMonitor:(id)arg3 ;
-(BOOL)shouldBypassCDNForCKAssetURLs;
-(BOOL)shouldUseSecureConnectionForCKAssetURLs;
-(id)initWithContextConfiguration:(id)arg1 networkBehaviorMonitor:(id)arg2 ;
-(void)updateAssetURLHostIfNeededWithComponents:(id)arg1 ;
-(id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 useSecureConnection:(BOOL)arg3 ;
-(BOOL)isProductionEnvironment;
-(BOOL)shouldUseCloudd;
-(void)setShouldUseSecureConnectionForCKAssetURLs:(BOOL)arg1 ;
-(void)setShouldBypassCDNForCKAssetURLs:(BOOL)arg1 ;
@end

