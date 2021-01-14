/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)cacheIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SPProtoCacheAssets *)permanentCache;
-(void)setPermanentCache:(SPProtoCacheAssets *)arg1 ;
-(SPProtoCacheAssets *)transientCache;
-(void)setTransientCache:(SPProtoCacheAssets *)arg1 ;
@end

