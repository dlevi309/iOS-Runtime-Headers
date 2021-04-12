/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences : PBCodable <NSCopying> {

	BOOL _changedChannel;
	BOOL _changedDNSPrimary;
	BOOL _changedDNSSecondary;
	BOOL _changedMAC;
	BOOL _newBSSID;
	SCD_Struct_Wi11 _has;

}

@property (assign,nonatomic) BOOL hasNewBSSID; 
@property (assign,nonatomic) BOOL newBSSID;                            //@synthesize newBSSID=_newBSSID - In the implementation block
@property (assign,nonatomic) BOOL hasChangedChannel; 
@property (assign,nonatomic) BOOL changedChannel;                      //@synthesize changedChannel=_changedChannel - In the implementation block
@property (assign,nonatomic) BOOL hasChangedDNSPrimary; 
@property (assign,nonatomic) BOOL changedDNSPrimary;                   //@synthesize changedDNSPrimary=_changedDNSPrimary - In the implementation block
@property (assign,nonatomic) BOOL hasChangedDNSSecondary; 
@property (assign,nonatomic) BOOL changedDNSSecondary;                 //@synthesize changedDNSSecondary=_changedDNSSecondary - In the implementation block
@property (assign,nonatomic) BOOL hasChangedMAC; 
@property (assign,nonatomic) BOOL changedMAC;                          //@synthesize changedMAC=_changedMAC - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNewBSSID:(BOOL)arg1 ;
-(void)setHasNewBSSID:(BOOL)arg1 ;
-(BOOL)hasNewBSSID;
-(void)setChangedChannel:(BOOL)arg1 ;
-(void)setHasChangedChannel:(BOOL)arg1 ;
-(BOOL)hasChangedChannel;
-(void)setChangedDNSPrimary:(BOOL)arg1 ;
-(void)setHasChangedDNSPrimary:(BOOL)arg1 ;
-(BOOL)hasChangedDNSPrimary;
-(void)setChangedDNSSecondary:(BOOL)arg1 ;
-(void)setHasChangedDNSSecondary:(BOOL)arg1 ;
-(BOOL)hasChangedDNSSecondary;
-(void)setChangedMAC:(BOOL)arg1 ;
-(void)setHasChangedMAC:(BOOL)arg1 ;
-(BOOL)hasChangedMAC;
-(BOOL)newBSSID;
-(BOOL)changedChannel;
-(BOOL)changedDNSPrimary;
-(BOOL)changedDNSSecondary;
-(BOOL)changedMAC;
@end

