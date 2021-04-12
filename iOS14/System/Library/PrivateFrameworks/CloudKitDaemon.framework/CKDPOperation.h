/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPOperation : PBCodable <NSCopying> {

	NSString* _operationUUID;
	int _type;
	BOOL _last;
	BOOL _synchronousMode;
	SCD_Struct_CK17 _has;

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
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
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
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
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
@end

