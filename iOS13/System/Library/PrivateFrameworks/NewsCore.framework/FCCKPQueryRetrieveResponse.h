/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface FCCKPQueryRetrieveResponse : PBCodable <NSCopying> {

	NSData* _continuationMarker;
	NSMutableArray* _queryResults;

}

@property (nonatomic,retain) NSMutableArray * queryResults;              //@synthesize queryResults=_queryResults - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                //@synthesize continuationMarker=_continuationMarker - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setQueryResults:(NSMutableArray *)arg1 ;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(void)addQueryResults:(id)arg1 ;
-(unsigned long long)queryResultsCount;
-(void)clearQueryResults;
-(id)queryResultsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasContinuationMarker;
-(NSMutableArray *)queryResults;
-(NSData *)continuationMarker;
@end

