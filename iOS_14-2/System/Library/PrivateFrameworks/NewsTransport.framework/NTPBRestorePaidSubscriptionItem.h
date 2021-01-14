/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBRestorePaidSubscriptionItem : PBCodable <NSCopying> {

	NSString* _restoredPaidSubscriptionChannelId;
	BOOL _isNewsAppPurchase;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasRestoredPaidSubscriptionChannelId; 
@property (nonatomic,retain) NSString * restoredPaidSubscriptionChannelId;              //@synthesize restoredPaidSubscriptionChannelId=_restoredPaidSubscriptionChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNewsAppPurchase; 
@property (assign,nonatomic) BOOL isNewsAppPurchase;                                    //@synthesize isNewsAppPurchase=_isNewsAppPurchase - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsNewsAppPurchase:(BOOL)arg1 ;
-(id)description;
-(BOOL)isNewsAppPurchase;
-(unsigned long long)hash;
-(void)setRestoredPaidSubscriptionChannelId:(NSString *)arg1 ;
-(BOOL)hasRestoredPaidSubscriptionChannelId;
-(void)setHasIsNewsAppPurchase:(BOOL)arg1 ;
-(BOOL)hasIsNewsAppPurchase;
-(NSString *)restoredPaidSubscriptionChannelId;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

