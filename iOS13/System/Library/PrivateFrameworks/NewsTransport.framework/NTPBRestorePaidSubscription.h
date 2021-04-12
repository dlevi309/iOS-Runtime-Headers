/*
* Generated on Monday, March 1, 2021 at 2:32:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying> {

	NSMutableArray* _items;
	NSMutableArray* _restoredPaidSubscriptionChannelIds;

}

@property (nonatomic,retain) NSMutableArray * restoredPaidSubscriptionChannelIds;              //@synthesize restoredPaidSubscriptionChannelIds=_restoredPaidSubscriptionChannelIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                           //@synthesize items=_items - In the implementation block
+(Class)itemsType;
+(Class)restoredPaidSubscriptionChannelIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(unsigned long long)itemsCount;
-(void)addItems:(id)arg1 ;
-(void)clearItems;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(void)addRestoredPaidSubscriptionChannelIds:(id)arg1 ;
-(void)clearRestoredPaidSubscriptionChannelIds;
-(unsigned long long)restoredPaidSubscriptionChannelIdsCount;
-(id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)restoredPaidSubscriptionChannelIds;
-(void)setRestoredPaidSubscriptionChannelIds:(NSMutableArray *)arg1 ;
@end

