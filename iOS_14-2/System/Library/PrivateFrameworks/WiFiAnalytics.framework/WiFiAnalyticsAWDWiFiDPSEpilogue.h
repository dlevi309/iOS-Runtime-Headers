/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences, WiFiAnalyticsAWDWAQuickDpsStats;

@interface WiFiAnalyticsAWDWiFiDPSEpilogue : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _action;
	int _afterRecommendedAction;
	NSMutableArray* _associationChanges;
	int _beforeAction;
	WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences* _changes;
	WiFiAnalyticsAWDWAQuickDpsStats* _qDpsStats;
	SCD_Struct_Wi6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBeforeAction; 
@property (assign,nonatomic) int beforeAction;                                                               //@synthesize beforeAction=_beforeAction - In the implementation block
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action;                                                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL hasAfterRecommendedAction; 
@property (assign,nonatomic) int afterRecommendedAction;                                                     //@synthesize afterRecommendedAction=_afterRecommendedAction - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain) WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences * changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,retain) NSMutableArray * associationChanges;                                            //@synthesize associationChanges=_associationChanges - In the implementation block
@property (nonatomic,readonly) BOOL hasQDpsStats; 
@property (nonatomic,retain) WiFiAnalyticsAWDWAQuickDpsStats * qDpsStats;                                    //@synthesize qDpsStats=_qDpsStats - In the implementation block
+(Class)associationChangesType;
-(WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences *)changes;
-(id)dictionaryRepresentation;
-(void)setHasAction:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)setChanges:(WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(id)description;
-(BOOL)hasAction;
-(BOOL)hasChanges;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAssociationChanges:(id)arg1 ;
-(unsigned long long)associationChangesCount;
-(void)clearAssociationChanges;
-(id)associationChangesAtIndex:(unsigned long long)arg1 ;
-(void)setQDpsStats:(WiFiAnalyticsAWDWAQuickDpsStats *)arg1 ;
-(int)beforeAction;
-(void)setBeforeAction:(int)arg1 ;
-(void)setHasBeforeAction:(BOOL)arg1 ;
-(BOOL)hasBeforeAction;
-(id)beforeActionAsString:(int)arg1 ;
-(int)StringAsBeforeAction:(id)arg1 ;
-(int)afterRecommendedAction;
-(void)setAfterRecommendedAction:(int)arg1 ;
-(void)setHasAfterRecommendedAction:(BOOL)arg1 ;
-(BOOL)hasAfterRecommendedAction;
-(id)afterRecommendedActionAsString:(int)arg1 ;
-(int)StringAsAfterRecommendedAction:(id)arg1 ;
-(BOOL)hasQDpsStats;
-(NSMutableArray *)associationChanges;
-(void)setAssociationChanges:(NSMutableArray *)arg1 ;
-(WiFiAnalyticsAWDWAQuickDpsStats *)qDpsStats;
@end

