/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(CKDClientContext *)context;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(PQLConnection *)db;
-(void)setDb:(PQLConnection *)arg1 ;
-(void)setContext:(CKDClientContext *)arg1 ;
-(id)initWithIdentifier:(id)arg1 context:(id)arg2 ;
-(id)dbPath;
-(void)setExpirationTimeout:(double)arg1 ;
-(double)expirationTimeout;
-(BOOL)setupCacheWithError:(id*)arg1 ;
-(void)_garbageCollectExpiredEntries;
-(void)removeCachedValueForKey:(id)arg1 ;
-(void)deleteCachedValuesBecauseOfLowDisk;
@end

