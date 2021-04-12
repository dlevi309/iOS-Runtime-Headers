/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)fetchResults;
-(void)setFetchResults:(NSMutableArray *)arg1 ;
-(void)addFetchResults:(id)arg1 ;
-(unsigned long long)fetchResultsCount;
-(void)clearFetchResults;
-(id)fetchResultsAtIndex:(unsigned long long)arg1 ;
@end

