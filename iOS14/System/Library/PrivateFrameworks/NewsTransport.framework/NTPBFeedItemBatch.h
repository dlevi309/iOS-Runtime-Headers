/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setFeedItems:(NSMutableArray *)arg1 ;
-(id)description;
-(NSMutableArray *)feedItems;
-(unsigned long long)hash;
-(void)addFeedItems:(id)arg1 ;
-(void)clearFeedItems;
-(unsigned long long)feedItemsCount;
-(id)feedItemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

