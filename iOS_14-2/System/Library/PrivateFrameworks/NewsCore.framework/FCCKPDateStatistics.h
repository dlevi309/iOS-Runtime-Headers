/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPDate;

@interface FCCKPDateStatistics : PBCodable <NSCopying> {

	FCCKPDate* _creation;
	FCCKPDate* _modification;

}

@property (nonatomic,readonly) BOOL hasCreation; 
@property (nonatomic,retain) FCCKPDate * creation;                  //@synthesize creation=_creation - In the implementation block
@property (nonatomic,readonly) BOOL hasModification; 
@property (nonatomic,retain) FCCKPDate * modification;              //@synthesize modification=_modification - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasModification;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(FCCKPDate *)creation;
-(unsigned long long)hash;
-(void)setModification:(FCCKPDate *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(FCCKPDate *)modification;
-(BOOL)hasCreation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCreation:(FCCKPDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

