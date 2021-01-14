/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPOplockFailure, FCCKPUniqueFieldFailure;

@interface FCCKPResponseOperationResultErrorClient : PBCodable <NSCopying> {

	FCCKPOplockFailure* _oplockFailure;
	int _type;
	FCCKPUniqueFieldFailure* _uniqueFieldFailure;
	SCD_Struct_FC4 _has;

}

@property (nonatomic,readonly) BOOL hasOplockFailure; 
@property (nonatomic,retain) FCCKPOplockFailure * oplockFailure; 
@property (nonatomic,readonly) BOOL hasUniqueFieldFailure; 
@property (nonatomic,retain) FCCKPUniqueFieldFailure * uniqueFieldFailure; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(void)setUniqueFieldFailure:(FCCKPUniqueFieldFailure *)arg1 ;
-(void)setOplockFailure:(FCCKPOplockFailure *)arg1 ;
-(BOOL)hasOplockFailure;
-(FCCKPOplockFailure *)oplockFailure;
-(FCCKPUniqueFieldFailure *)uniqueFieldFailure;
-(BOOL)hasUniqueFieldFailure;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

