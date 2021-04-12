/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBFeedItemBatch : PBCodable <NSCopying> {

	NSMutableArray* _feedItems;

}

@property (nonatomic,retain) NSMutableArray * feedItems;              //@synthesize feedItems=_feedItems - In the implementation block
+(Class)feedItemsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFeedItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)feedItems;
-(void)addFeedItems:(id)arg1 ;
-(void)clearFeedItems;
-(unsigned long long)feedItemsCount;
-(id)feedItemsAtIndex:(unsigned long long)arg1 ;
@end

