/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBUserPaidSubscriptionStatus : PBCodable <NSCopying> {

	NSString* _paidSubscriptionChannelId;
	int _paidSubscriptionStatus;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasPaidSubscriptionStatus; 
@property (assign,nonatomic) int paidSubscriptionStatus;                        //@synthesize paidSubscriptionStatus=_paidSubscriptionStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasPaidSubscriptionChannelId; 
@property (nonatomic,retain) NSString * paidSubscriptionChannelId;              //@synthesize paidSubscriptionChannelId=_paidSubscriptionChannelId - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setPaidSubscriptionChannelId:(NSString *)arg1 ;
-(int)paidSubscriptionStatus;
-(void)setPaidSubscriptionStatus:(int)arg1 ;
-(void)setHasPaidSubscriptionStatus:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionStatus;
-(id)paidSubscriptionStatusAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionStatus:(id)arg1 ;
-(BOOL)hasPaidSubscriptionChannelId;
-(NSString *)paidSubscriptionChannelId;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

