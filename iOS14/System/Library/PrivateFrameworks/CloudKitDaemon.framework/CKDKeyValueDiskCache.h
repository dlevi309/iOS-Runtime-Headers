/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class PQLConnection, NSString, CKDClientContext;

@interface CKDKeyValueDiskCache : NSObject {

	double _expirationTimeout;
	PQLConnection* _db;
	NSString* _identifier;
	CKDClientContext* _context;

}

@property (nonatomic,retain) PQLConnection * db;                             //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double expirationTimeout;                       //@synthesize expirationTimeout=_expirationTimeout - In the implementation block
-(PQLConnection *)db;
-(id)cachedValueForKey:(id)arg1 ;
-(CKDClientContext *)context;
-(void)setDb:(PQLConnection *)arg1 ;
-(id)dbPath;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)setExpirationTimeout:(double)arg1 ;
-(double)expirationTimeout;
-(BOOL)setupCacheWithError:(id*)arg1 ;
-(void)_garbageCollectExpiredEntries;
-(void)removeCachedValueForKey:(id)arg1 ;
-(void)deleteCachedValuesBecauseOfLowDisk;
@end

