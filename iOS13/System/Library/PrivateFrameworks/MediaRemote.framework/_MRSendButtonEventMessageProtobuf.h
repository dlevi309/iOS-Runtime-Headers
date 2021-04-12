/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRSendButtonEventMessageProtobuf : PBCodable <NSCopying> {

	unsigned _usage;
	unsigned _usagePage;
	BOOL _buttonDown;
	SCD_Struct_MR6 _has;

}

@property (assign,nonatomic) BOOL hasUsagePage; 
@property (assign,nonatomic) unsigned usagePage;              //@synthesize usagePage=_usagePage - In the implementation block
@property (assign,nonatomic) BOOL hasUsage; 
@property (assign,nonatomic) unsigned usage;                  //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) BOOL hasButtonDown; 
@property (assign,nonatomic) BOOL buttonDown;                 //@synthesize buttonDown=_buttonDown - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setUsage:(unsigned)arg1 ;
-(unsigned)usage;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUsagePage:(unsigned)arg1 ;
-(unsigned)usagePage;
-(void)setButtonDown:(BOOL)arg1 ;
-(BOOL)buttonDown;
-(void)setHasUsagePage:(BOOL)arg1 ;
-(BOOL)hasUsagePage;
-(void)setHasUsage:(BOOL)arg1 ;
-(BOOL)hasUsage;
-(void)setHasButtonDown:(BOOL)arg1 ;
-(BOOL)hasButtonDown;
@end

