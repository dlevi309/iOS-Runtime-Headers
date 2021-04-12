/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)clearItems;
-(void)addItems:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)items;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)itemsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addRestoredPaidSubscriptionChannelIds:(id)arg1 ;
-(void)clearRestoredPaidSubscriptionChannelIds;
-(unsigned long long)restoredPaidSubscriptionChannelIdsCount;
-(id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1 ;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)restoredPaidSubscriptionChannelIds;
-(void)setRestoredPaidSubscriptionChannelIds:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

