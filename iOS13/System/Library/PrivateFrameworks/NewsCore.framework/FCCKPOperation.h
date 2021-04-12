/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)synchronousMode;
-(void)setSynchronousMode:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLast:(BOOL)arg1 ;
-(void)setOperationUUID:(NSString *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)last;
-(NSString *)operationUUID;
-(BOOL)hasOperationUUID;
-(void)setHasSynchronousMode:(BOOL)arg1 ;
-(BOOL)hasSynchronousMode;
-(void)setHasLast:(BOOL)arg1 ;
-(BOOL)hasLast;
@end

