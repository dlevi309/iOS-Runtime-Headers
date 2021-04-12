/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasNotificationType; 
@property (assign,nonatomic) int notificationType;                              //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,retain) NSMutableArray * tagIds;                           //@synthesize tagIds=_tagIds - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriberType; 
@property (assign,nonatomic) int subscriberType;                                //@synthesize subscriberType=_subscriberType - In the implementation block
@property (assign,nonatomic) BOOL hasPaidBundleSubscriptionStatus; 
@property (assign,nonatomic) int paidBundleSubscriptionStatus;                  //@synthesize paidBundleSubscriptionStatus=_paidBundleSubscriptionStatus - In the implementation block
+(Class)tagIdType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setNotificationType:(int)arg1 ;
-(int)notificationType;
-(NSMutableArray *)tagIds;
-(void)setTagIds:(NSMutableArray *)arg1 ;
-(void)setSubscriberType:(int)arg1 ;
-(void)setPaidBundleSubscriptionStatus:(int)arg1 ;
-(void)setHasNotificationType:(BOOL)arg1 ;
-(BOOL)hasNotificationType;
-(void)addTagId:(id)arg1 ;
-(void)clearTagIds;
-(unsigned long long)tagIdsCount;
-(id)tagIdAtIndex:(unsigned long long)arg1 ;
-(int)subscriberType;
-(void)setHasSubscriberType:(BOOL)arg1 ;
-(BOOL)hasSubscriberType;
-(int)paidBundleSubscriptionStatus;
-(void)setHasPaidBundleSubscriptionStatus:(BOOL)arg1 ;
-(BOOL)hasPaidBundleSubscriptionStatus;
@end

