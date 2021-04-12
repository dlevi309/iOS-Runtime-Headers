/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPSubscriptionNotificationAlert, NSString;

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {

	NSMutableArray* _additionalFields;
	CKDPSubscriptionNotificationAlert* _alert;
	NSString* _collapseIdKey;
	BOOL _shouldBadge;
	BOOL _shouldSendContentAvailable;
	BOOL _shouldSendMutableContent;
	SCD_Struct_CK16 _has;

}

@property (nonatomic,readonly) BOOL hasAlert; 
@property (nonatomic,retain) CKDPSubscriptionNotificationAlert * alert;              //@synthesize alert=_alert - In the implementation block
@property (assign,nonatomic) BOOL hasShouldBadge; 
@property (assign,nonatomic) BOOL shouldBadge;                                       //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalFields;                      //@synthesize additionalFields=_additionalFields - In the implementation block
@property (assign,nonatomic) BOOL hasShouldSendContentAvailable; 
@property (assign,nonatomic) BOOL shouldSendContentAvailable;                        //@synthesize shouldSendContentAvailable=_shouldSendContentAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasShouldSendMutableContent; 
@property (assign,nonatomic) BOOL shouldSendMutableContent;                          //@synthesize shouldSendMutableContent=_shouldSendMutableContent - In the implementation block
@property (nonatomic,readonly) BOOL hasCollapseIdKey; 
@property (nonatomic,retain) NSString * collapseIdKey;                               //@synthesize collapseIdKey=_collapseIdKey - In the implementation block
+(Class)additionalFieldsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setShouldSendContentAvailable:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)shouldBadge;
-(BOOL)shouldSendContentAvailable;
-(BOOL)shouldSendMutableContent;
-(void)setShouldBadge:(BOOL)arg1 ;
-(void)setShouldSendMutableContent:(BOOL)arg1 ;
-(CKDPSubscriptionNotificationAlert *)alert;
-(void)setAlert:(CKDPSubscriptionNotificationAlert *)arg1 ;
-(NSString *)collapseIdKey;
-(NSMutableArray *)additionalFields;
-(BOOL)hasAlert;
-(void)setAdditionalFields:(NSMutableArray *)arg1 ;
-(void)setCollapseIdKey:(NSString *)arg1 ;
-(void)addAdditionalFields:(id)arg1 ;
-(unsigned long long)additionalFieldsCount;
-(void)clearAdditionalFields;
-(id)additionalFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setHasShouldBadge:(BOOL)arg1 ;
-(BOOL)hasShouldBadge;
-(void)setHasShouldSendContentAvailable:(BOOL)arg1 ;
-(BOOL)hasShouldSendContentAvailable;
-(void)setHasShouldSendMutableContent:(BOOL)arg1 ;
-(BOOL)hasShouldSendMutableContent;
-(BOOL)hasCollapseIdKey;
@end

