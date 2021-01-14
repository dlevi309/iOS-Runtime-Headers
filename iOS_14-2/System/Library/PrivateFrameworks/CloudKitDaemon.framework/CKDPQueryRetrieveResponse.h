/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying> {

	NSData* _continuationMarker;
	NSMutableArray* _queryResults;

}

@property (nonatomic,retain) NSMutableArray * queryResults;              //@synthesize queryResults=_queryResults - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                //@synthesize continuationMarker=_continuationMarker - In the implementation block
+(Class)queryResultsType;
-(id)dictionaryRepresentation;
-(BOOL)hasContinuationMarker;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)queryResults;
-(id)description;
-(void)addQueryResults:(id)arg1 ;
-(NSData *)continuationMarker;
-(id)queryResultsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)queryResultsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearQueryResults;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setQueryResults:(NSMutableArray *)arg1 ;
@end

