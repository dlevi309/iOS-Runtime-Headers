/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_FC1 _has;

}

@property (nonatomic,readonly) BOOL hasOplockFailure; 
@property (nonatomic,retain) FCCKPOplockFailure * oplockFailure; 
@property (nonatomic,readonly) BOOL hasUniqueFieldFailure; 
@property (nonatomic,retain) FCCKPUniqueFieldFailure * uniqueFieldFailure; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setOplockFailure:(FCCKPOplockFailure *)arg1 ;
-(void)setUniqueFieldFailure:(FCCKPUniqueFieldFailure *)arg1 ;
-(BOOL)hasOplockFailure;
-(FCCKPOplockFailure *)oplockFailure;
-(BOOL)hasUniqueFieldFailure;
-(FCCKPUniqueFieldFailure *)uniqueFieldFailure;
@end

