/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSTouchMessage : PBCodable <NSCopying> {

	int _direction;
	unsigned _repeatCount;
	int _sessionIdentifier;
	SCD_Struct_RM5 _has;

}

@property (assign,nonatomic) BOOL hasDirection; 
@property (assign,nonatomic) int direction;                          //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatCount; 
@property (assign,nonatomic) unsigned repeatCount;                   //@synthesize repeatCount=_repeatCount - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRepeatCount:(unsigned)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(unsigned)repeatCount;
-(BOOL)hasDirection;
-(BOOL)hasSessionIdentifier;
-(void)setHasDirection:(BOOL)arg1 ;
-(BOOL)hasRepeatCount;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasRepeatCount:(BOOL)arg1 ;
@end

