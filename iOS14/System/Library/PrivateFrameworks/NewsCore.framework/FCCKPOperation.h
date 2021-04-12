/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCCKPOperation : PBCodable <NSCopying> {

	NSString* _operationUUID;
	int _type;
	BOOL _last;
	BOOL _synchronousMode;
	SCD_Struct_FC8 _has;

}

@property (nonatomic,readonly) BOOL hasOperationUUID; 
@property (nonatomic,retain) NSString * operationUUID;              //@synthesize operationUUID=_operationUUID - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasSynchronousMode; 
@property (assign,nonatomic) BOOL synchronousMode;                  //@synthesize synchronousMode=_synchronousMode - In the implementation block
@property (assign,nonatomic) BOOL hasLast; 
@property (assign,nonatomic) BOOL last;                             //@synthesize last=_last - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasLast;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)synchronousMode;
-(id)description;
-(void)setLast:(BOOL)arg1 ;
-(int)type;
-(BOOL)hasSynchronousMode;
-(unsigned long long)hash;
-(void)setHasLast:(BOOL)arg1 ;
-(void)setOperationUUID:(NSString *)arg1 ;
-(BOOL)last;
-(BOOL)hasOperationUUID;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)operationUUID;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSynchronousMode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSynchronousMode:(BOOL)arg1 ;
-(void)dealloc;
@end

