/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoCoalescedBatchedFetchResult : PBCodable <NSCopying> {

	NSMutableArray* _fetchResults;

}

@property (nonatomic,retain) NSMutableArray * fetchResults;              //@synthesize fetchResults=_fetchResults - In the implementation block
+(Class)fetchResultsType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)fetchResults;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFetchResults:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addFetchResults:(id)arg1 ;
-(unsigned long long)fetchResultsCount;
-(void)clearFetchResults;
-(id)fetchResultsAtIndex:(unsigned long long)arg1 ;
@end

