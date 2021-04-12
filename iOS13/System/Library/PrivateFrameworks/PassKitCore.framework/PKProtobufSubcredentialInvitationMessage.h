/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufSubcredentialInvitationMessage : PBCodable <NSCopying> {

	NSString* _dataString;
	NSString* _invitation;
	int _status;
	unsigned _version;
	SCD_Struct_PK13 _has;

}

@property (assign,nonatomic) unsigned version;                   //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasInvitation; 
@property (nonatomic,retain) NSString * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasDataString; 
@property (nonatomic,retain) NSString * dataString;              //@synthesize dataString=_dataString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(NSString *)invitation;
-(void)setInvitation:(NSString *)arg1 ;
-(void)setDataString:(NSString *)arg1 ;
-(BOOL)hasInvitation;
-(BOOL)hasDataString;
-(NSString *)dataString;
@end

