/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)bundleIds;
-(unsigned long long)bundleIdsCount;
-(void)clearBundleIds;
-(void)setBundleIds:(NSMutableArray *)arg1 ;
-(void)addBundleIds:(id)arg1 ;
-(id)bundleIdsAtIndex:(unsigned long long)arg1 ;
@end

