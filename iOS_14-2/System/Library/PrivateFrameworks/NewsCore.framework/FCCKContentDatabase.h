/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	double _maximumRetryAfterForCK;

}

@property (nonatomic,copy,readonly) NSString * containerIdentifier;                            //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isProductionEnvironment;                                   //@synthesize isProductionEnvironment=_isProductionEnvironment - In the implementation block
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseCloudd;                                           //@synthesize shouldUseCloudd=_shouldUseCloudd - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSecureConnectionForCKAssetURLs;                     //@synthesize shouldUseSecureConnectionForCKAssetURLs=_shouldUseSecureConnectionForCKAssetURLs - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassCDNForCKAssetURLs;                               //@synthesize shouldBypassCDNForCKAssetURLs=_shouldBypassCDNForCKAssetURLs - In the implementation block
@property (assign,nonatomic) double maximumRetryAfterForCK;                                    //@synthesize maximumRetryAfterForCK=_maximumRetryAfterForCK - In the implementation block
-(id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 useSecureConnection:(BOOL)arg3 ;
-(void)setShouldBypassCDNForCKAssetURLs:(BOOL)arg1 ;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)setMaximumRetryAfterForCK:(double)arg1 ;
-(double)maximumRetryAfterForCK;
-(NSString *)containerIdentifier;
-(void)updateAssetURLHostIfNeededWithComponents:(id)arg1 ;
-(BOOL)isProductionEnvironment;
-(void)setShouldUseSecureConnectionForCKAssetURLs:(BOOL)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id)initWithContextConfiguration:(id)arg1 networkBehaviorMonitor:(id)arg2 ;
-(BOOL)shouldUseSecureConnectionForCKAssetURLs;
-(BOOL)shouldUseCloudd;
-(id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 ;
-(id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(BOOL)arg2 networkBehaviorMonitor:(id)arg3 ;
-(BOOL)shouldBypassCDNForCKAssetURLs;
@end

