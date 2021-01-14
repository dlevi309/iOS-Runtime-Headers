/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPIdentifier, CKDPSubscriptionNotification, CKDPRecordZoneIdentifier;

@interface CKDPSubscription : PBCodable <NSCopying> {

	SCD_Struct_CK24* _mutationTriggers;
	int _evaluationType;
	NSMutableArray* _filters;
	CKDPIdentifier* _identifier;
	CKDPSubscriptionNotification* _notification;
	int _owner;
	NSMutableArray* _recordTypes;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _fireOnce;
	SCD_Struct_CK17 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluationType; 
@property (assign,nonatomic) int evaluationType;                                       //@synthesize evaluationType=_evaluationType - In the implementation block
@property (assign,nonatomic) BOOL hasOwner; 
@property (assign,nonatomic) int owner;                                                //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) unsigned long long mutationTriggersCount; 
@property (nonatomic,readonly) int* mutationTriggers; 
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) CKDPSubscriptionNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;                                 //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordTypes;                             //@synthesize recordTypes=_recordTypes - In the implementation block
@property (assign,nonatomic) BOOL hasFireOnce; 
@property (assign,nonatomic) BOOL fireOnce;                                            //@synthesize fireOnce=_fireOnce - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
+(Class)filtersType;
+(Class)recordTypesType;
-(id)dictionaryRepresentation;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)clearFilters;
-(int)StringAsEvaluationType:(id)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(BOOL)hasFireOnce;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(void)addFilters:(id)arg1 ;
-(id)filtersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasZoneIdentifier;
-(void)setNotification:(CKDPSubscriptionNotification *)arg1 ;
-(unsigned long long)filtersCount;
-(int)owner;
-(CKDPSubscriptionNotification *)notification;
-(BOOL)hasIdentifier;
-(id)recordTypesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)filters;
-(void)mergeFrom:(id)arg1 ;
-(id)evaluationTypeAsString:(int)arg1 ;
-(void)addMutationTriggers:(int)arg1 ;
-(void)setMutationTriggers:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)StringAsMutationTriggers:(id)arg1 ;
-(id)mutationTriggersAsString:(int)arg1 ;
-(id)description;
-(NSMutableArray *)recordTypes;
-(void)clearRecordTypes;
-(BOOL)hasOwner;
-(unsigned long long)mutationTriggersCount;
-(id)ownerAsString:(int)arg1 ;
-(void)addRecordTypes:(id)arg1 ;
-(void)setOwner:(int)arg1 ;
-(BOOL)hasNotification;
-(void)setFireOnce:(BOOL)arg1 ;
-(int)mutationTriggersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setHasEvaluationType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)evaluationType;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(CKDPIdentifier *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearMutationTriggers;
-(BOOL)hasEvaluationType;
-(void)setEvaluationType:(int)arg1 ;
-(void)setRecordTypes:(NSMutableArray *)arg1 ;
-(int)StringAsOwner:(id)arg1 ;
-(BOOL)fireOnce;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasFireOnce:(BOOL)arg1 ;
-(void)setHasOwner:(BOOL)arg1 ;
-(unsigned long long)recordTypesCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(int*)mutationTriggers;
@end

