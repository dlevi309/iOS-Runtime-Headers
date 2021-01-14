/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBNotificationEntity : PBCodable <NSCopying> {

	int _notificationType;
	int _paidBundleSubscriptionStatus;
	int _subscriberType;
	NSMutableArray* _tagIds;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasNotificationType; 
@property (assign,nonatomic) int notificationType;                              //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,retain) NSMutableArray * tagIds;                           //@synthesize tagIds=_tagIds - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriberType; 
@property (assign,nonatomic) int subscriberType;                                //@synthesize subscriberType=_subscriberType - In the implementation block
@property (assign,nonatomic) BOOL hasPaidBundleSubscriptionStatus; 
@property (assign,nonatomic) int paidBundleSubscriptionStatus;                  //@synthesize paidBundleSubscriptionStatus=_paidBundleSubscriptionStatus - In the implementation block
+(Class)tagIdType;
-(id)dictionaryRepresentation;
-(void)clearTagIds;
-(unsigned long long)tagIdsCount;
-(id)tagIdAtIndex:(unsigned long long)arg1 ;
-(int)subscriberType;
-(void)setHasSubscriberType:(BOOL)arg1 ;
-(BOOL)hasSubscriberType;
-(int)paidBundleSubscriptionStatus;
-(void)setHasPaidBundleSubscriptionStatus:(BOOL)arg1 ;
-(BOOL)hasPaidBundleSubscriptionStatus;
-(BOOL)hasNotificationType;
-(NSMutableArray *)tagIds;
-(void)mergeFrom:(id)arg1 ;
-(void)setNotificationType:(int)arg1 ;
-(id)description;
-(void)setHasNotificationType:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setTagIds:(NSMutableArray *)arg1 ;
-(void)addTagId:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubscriberType:(int)arg1 ;
-(void)setPaidBundleSubscriptionStatus:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)notificationType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

