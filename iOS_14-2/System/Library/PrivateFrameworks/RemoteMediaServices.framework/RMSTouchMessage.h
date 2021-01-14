/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)direction;
-(unsigned)repeatCount;
-(id)dictionaryRepresentation;
-(void)setDirection:(int)arg1 ;
-(void)setRepeatCount:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(int)sessionIdentifier;
-(id)description;
-(BOOL)hasDirection;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasDirection:(BOOL)arg1 ;
-(BOOL)hasRepeatCount;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasRepeatCount:(BOOL)arg1 ;
@end

