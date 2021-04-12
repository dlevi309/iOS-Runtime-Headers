/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)subscriptions;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(void)addSubscriptions:(id)arg1 ;
-(unsigned long long)subscriptionsCount;
-(void)clearSubscriptions;
-(id)subscriptionsAtIndex:(unsigned long long)arg1 ;
@end

