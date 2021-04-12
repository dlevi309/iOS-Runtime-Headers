/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBRestorePaidSubscriptionItem : PBCodable <NSCopying> {

	NSString* _restoredPaidSubscriptionChannelId;
	BOOL _isNewsAppPurchase;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasRestoredPaidSubscriptionChannelId; 
@property (nonatomic,retain) NSString * restoredPaidSubscriptionChannelId;              //@synthesize restoredPaidSubscriptionChannelId=_restoredPaidSubscriptionChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNewsAppPurchase; 
@property (assign,nonatomic) BOOL isNewsAppPurchase;                                    //@synthesize isNewsAppPurchase=_isNewsAppPurchase - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isNewsAppPurchase;
-(void)setIsNewsAppPurchase:(BOOL)arg1 ;
-(void)setRestoredPaidSubscriptionChannelId:(NSString *)arg1 ;
-(BOOL)hasRestoredPaidSubscriptionChannelId;
-(void)setHasIsNewsAppPurchase:(BOOL)arg1 ;
-(BOOL)hasIsNewsAppPurchase;
-(NSString *)restoredPaidSubscriptionChannelId;
@end

