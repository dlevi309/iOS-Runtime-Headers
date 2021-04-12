/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SPProtoCacheAssets;

@interface SPProtoCacheSyncData : PBCodable <NSCopying> {

	NSString* _cacheIdentifier;
	SPProtoCacheAssets* _permanentCache;
	SPProtoCacheAssets* _transientCache;

}

@property (nonatomic,retain) NSString * cacheIdentifier;                       //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
@property (nonatomic,retain) SPProtoCacheAssets * permanentCache;              //@synthesize permanentCache=_permanentCache - In the implementation block
@property (nonatomic,retain) SPProtoCacheAssets * transientCache;              //@synthesize transientCache=_transientCache - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)cacheIdentifier;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(SPProtoCacheAssets *)permanentCache;
-(void)setPermanentCache:(SPProtoCacheAssets *)arg1 ;
-(SPProtoCacheAssets *)transientCache;
-(void)setTransientCache:(SPProtoCacheAssets *)arg1 ;
@end

