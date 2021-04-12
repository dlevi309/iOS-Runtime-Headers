/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeoutIntervalForResource:(long long)arg1 ;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(long long)timeoutIntervalForResource;
-(BOOL)allowsCellularAccess;
-(void)setAllowsExpensiveAccess:(BOOL)arg1 ;
-(BOOL)allowsExpensiveAccess;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(void)setCanUseLocalCacheServer:(BOOL)arg1 ;
-(BOOL)canUseLocalCacheServer;
-(void)setAdditionalServerParams:(NSMutableDictionary *)arg1 ;
-(BOOL)discretionary;
-(NSMutableDictionary *)additionalServerParams;
-(BOOL)requiresPowerPluggedIn;
-(BOOL)prefersInfraWiFi;
-(void)logOptions;
-(void)setRequiresPowerPluggedIn:(BOOL)arg1 ;
-(void)setPrefersInfraWiFi:(BOOL)arg1 ;
@end

