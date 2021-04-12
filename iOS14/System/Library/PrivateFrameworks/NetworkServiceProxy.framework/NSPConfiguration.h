/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDate, NSArray, NSURLSession, NSDictionary;

@interface NSPConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSString* _waldoHost;
	BOOL _ignoreInvalidCerts;
	NSNumber* _version;
	NSNumber* _timestamp;
	NSNumber* _enabled;
	NSDate* _resurrectionDate;
	NSArray* _appRules;
	NSNumber* _waldoEnabled;
	NSNumber* _waldoPort;
	NSString* _waldoPath;
	NSNumber* _waldoRequestTimeout;
	NSString* _waldoLeafOID;
	NSNumber* _waldoRevocationFailClosed;
	NSURLSession* _waldoSession;
	NSDictionary* _edgeSets;
	NSNumber* _persistMetrics;
	long long _diskVersion;
	NSPConfiguration* _defaults;

}

@property (readonly) long long diskVersion;                            //@synthesize diskVersion=_diskVersion - In the implementation block
@property (retain) NSPConfiguration * defaults;                        //@synthesize defaults=_defaults - In the implementation block
@property (readonly) NSNumber * version;                               //@synthesize version=_version - In the implementation block
@property (readonly) NSNumber * timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (copy) NSNumber * enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSDate * resurrectionDate;                            //@synthesize resurrectionDate=_resurrectionDate - In the implementation block
@property (copy) NSArray * appRules;                                   //@synthesize appRules=_appRules - In the implementation block
@property (copy) NSNumber * waldoEnabled;                              //@synthesize waldoEnabled=_waldoEnabled - In the implementation block
@property (copy) NSString * waldoHost; 
@property (copy) NSNumber * waldoPort;                                 //@synthesize waldoPort=_waldoPort - In the implementation block
@property (copy) NSString * waldoPath;                                 //@synthesize waldoPath=_waldoPath - In the implementation block
@property (copy) NSNumber * waldoRequestTimeout;                       //@synthesize waldoRequestTimeout=_waldoRequestTimeout - In the implementation block
@property (copy) NSString * waldoLeafOID;                              //@synthesize waldoLeafOID=_waldoLeafOID - In the implementation block
@property (copy) NSNumber * waldoRevocationFailClosed;                 //@synthesize waldoRevocationFailClosed=_waldoRevocationFailClosed - In the implementation block
@property (nonatomic,retain) NSURLSession * waldoSession;              //@synthesize waldoSession=_waldoSession - In the implementation block
@property (assign) BOOL ignoreInvalidCerts;                            //@synthesize ignoreInvalidCerts=_ignoreInvalidCerts - In the implementation block
@property (nonatomic,retain) NSDictionary * edgeSets;                  //@synthesize edgeSets=_edgeSets - In the implementation block
@property (copy) NSNumber * persistMetrics;                            //@synthesize persistMetrics=_persistMetrics - In the implementation block
@property (readonly) NSDate * dayPassExpirationDate; 
@property (readonly) NSDate * earliestEnableCheckDate; 
@property (readonly) BOOL isDead; 
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
-(void)setDefaults:(NSPConfiguration *)arg1 ;
-(NSNumber *)enabled;
-(void)setup;
-(void)merge:(id)arg1 ;
-(NSPConfiguration *)defaults;
-(NSString *)waldoLeafOID;
-(void)setWaldoRevocationFailClosed:(NSNumber *)arg1 ;
-(void)setWaldoSession:(NSURLSession *)arg1 ;
-(id)initFromTLVs:(id)arg1 ;
-(NSDate *)earliestEnableCheckDate;
-(BOOL)ignoreInvalidCerts;
-(id)initFromKeychain;
-(void)setEdgeSets:(NSDictionary *)arg1 ;
-(NSNumber *)timestamp;
-(id)copyTLVData;
-(id)copyAgentResultsForAppRule:(id)arg1 ;
-(id)getEdgeSetForSigningIdentifier:(id)arg1 ;
-(void)setIgnoreInvalidCerts:(BOOL)arg1 ;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)updateNetworkAgents;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)waldoPort;
-(NSString *)waldoPath;
-(NSString *)waldoHost;
-(void)setWaldoRequestTimeout:(NSNumber *)arg1 ;
-(void)setWaldoHost:(NSString *)arg1 ;
-(void)setWaldoPort:(NSNumber *)arg1 ;
-(void)setWaldoLeafOID:(NSString *)arg1 ;
-(NSDictionary *)edgeSets;
-(NSNumber *)waldoRevocationFailClosed;
-(long long)diskVersion;
-(id)getEdgeSetForAppRule:(id)arg1 ;
-(void)setAppRules:(NSArray *)arg1 ;
-(BOOL)evaluateEnableRatios;
-(NSURLSession *)waldoSession;
-(NSNumber *)persistMetrics;
-(NSNumber *)waldoRequestTimeout;
-(NSNumber *)waldoEnabled;
-(void)setWaldoPath:(NSString *)arg1 ;
-(id)createWaldoURLWithDomain:(id)arg1 timestamp:(id)arg2 ;
-(void)removeFromKeychain;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDead;
-(void)enumerateEdgeSetsWithBlock:(/*^block*/id)arg1 ;
-(void)teardown;
-(void)setWaldoEnabled:(NSNumber *)arg1 ;
-(id)getCurrentKeyBagForAppRule:(id)arg1 ;
-(NSDate *)dayPassExpirationDate;
-(BOOL)resetStaleEdgeSets;
-(void)saveToKeychain;
-(void)setResurrectionDate:(NSDate *)arg1 ;
-(id)initWithTimestamp:(id)arg1 fromDictionary:(id)arg2 waldoSource:(long long)arg3 ;
-(void)incrementSessionCountersOnFirstLaunch;
-(NSNumber *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)appRules;
-(void)setPersistMetrics:(NSNumber *)arg1 ;
-(NSDate *)resurrectionDate;
-(id)loadBuiltinAppRulesFromDisk;
@end

