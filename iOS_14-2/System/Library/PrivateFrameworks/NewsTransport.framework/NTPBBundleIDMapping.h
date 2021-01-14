/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBBundleIDMapping : PBCodable <NSCopying> {

	NSMutableArray* _bundleIds;

}

@property (nonatomic,retain) NSMutableArray * bundleIds;              //@synthesize bundleIds=_bundleIds - In the implementation block
+(Class)bundleIdsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addBundleIds:(id)arg1 ;
-(id)bundleIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)bundleIdsCount;
-(void)clearBundleIds;
-(void)setBundleIds:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)bundleIds;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

