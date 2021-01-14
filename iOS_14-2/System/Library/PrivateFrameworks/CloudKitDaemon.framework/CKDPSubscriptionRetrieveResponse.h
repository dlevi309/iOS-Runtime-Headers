/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable <NSCopying> {

	NSMutableArray* _subscriptions;

}

@property (nonatomic,retain) NSMutableArray * subscriptions;              //@synthesize subscriptions=_subscriptions - In the implementation block
+(Class)subscriptionsType;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)subscriptions;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addSubscriptions:(id)arg1 ;
-(unsigned long long)subscriptionsCount;
-(void)clearSubscriptions;
-(id)subscriptionsAtIndex:(unsigned long long)arg1 ;
@end

