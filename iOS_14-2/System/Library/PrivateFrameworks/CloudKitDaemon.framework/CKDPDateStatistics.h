/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate;

@interface CKDPDateStatistics : PBCodable <NSCopying> {

	CKDPDate* _creation;
	CKDPDate* _modification;

}

@property (nonatomic,readonly) BOOL hasCreation; 
@property (nonatomic,retain) CKDPDate * creation;                  //@synthesize creation=_creation - In the implementation block
@property (nonatomic,readonly) BOOL hasModification; 
@property (nonatomic,retain) CKDPDate * modification;              //@synthesize modification=_modification - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasModification;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(CKDPDate *)creation;
-(unsigned long long)hash;
-(void)setModification:(CKDPDate *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CKDPDate *)modification;
-(BOOL)hasCreation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCreation:(CKDPDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

