/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface MADownloadOptions : NSObject <NSSecureCoding> {

	BOOL _allowsCellularAccess;
	BOOL _canUseLocalCacheServer;
	BOOL _discretionary;
	BOOL _allowsExpensiveAccess;
	BOOL _requiresPowerPluggedIn;
	BOOL _prefersInfraWiFi;
	BOOL _liveServerCatalogOnly;
	BOOL _liveServerCatalogOnlyIsOverridden;
	long long _timeoutIntervalForResource;
	NSMutableDictionary* _additionalServerParams;
	NSString* _sessionId;

}

@property (assign,nonatomic) BOOL allowsCellularAccess;                                 //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) long long timeoutIntervalForResource;                      //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL discretionary;                                        //@synthesize discretionary=_discretionary - In the implementation block
@property (assign,nonatomic) BOOL allowsExpensiveAccess;                                //@synthesize allowsExpensiveAccess=_allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) BOOL requiresPowerPluggedIn;                               //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) BOOL canUseLocalCacheServer;                               //@synthesize canUseLocalCacheServer=_canUseLocalCacheServer - In the implementation block
@property (assign,nonatomic) BOOL prefersInfraWiFi;                                     //@synthesize prefersInfraWiFi=_prefersInfraWiFi - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                      //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * additionalServerParams;              //@synthesize additionalServerParams=_additionalServerParams - In the implementation block
@property (assign,nonatomic) BOOL liveServerCatalogOnly;                                //@synthesize liveServerCatalogOnly=_liveServerCatalogOnly - In the implementation block
@property (assign,nonatomic) BOOL liveServerCatalogOnlyIsOverridden;                    //@synthesize liveServerCatalogOnlyIsOverridden=_liveServerCatalogOnlyIsOverridden - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDiscretionary:(BOOL)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)prefersInfraWiFi;
-(id)init;
-(BOOL)canUseLocalCacheServer;
-(void)setCanUseLocalCacheServer:(BOOL)arg1 ;
-(void)setRequiresPowerPluggedIn:(BOOL)arg1 ;
-(void)setLiveServerCatalogOnly:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPrefersInfraWiFi:(BOOL)arg1 ;
-(void)setTimeoutIntervalForResource:(long long)arg1 ;
-(BOOL)allowsExpensiveAccess;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(id)description;
-(BOOL)liveServerCatalogOnly;
-(void)setAllowsExpensiveAccess:(BOOL)arg1 ;
-(BOOL)liveServerCatalogOnlyIsOverridden;
-(BOOL)allowsCellularAccess;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)additionalServerParams;
-(BOOL)discretionary;
-(BOOL)requiresPowerPluggedIn;
-(void)setLiveServerCatalogOnlyIsOverridden:(BOOL)arg1 ;
-(long long)timeoutIntervalForResource;
-(void)logOptions;
-(void)setAdditionalServerParams:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

