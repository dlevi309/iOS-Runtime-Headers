/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying> {

	unsigned _formats;
	int _operation;
	unsigned _preferredFormat;
	int _transport;
	SCD_Struct_VC45 _has;

}

@property (assign,nonatomic) int transport;                         //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) int operation;                         //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) unsigned formats;                      //@synthesize formats=_formats - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredFormat; 
@property (assign,nonatomic) unsigned preferredFormat;              //@synthesize preferredFormat=_preferredFormat - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transport;
-(void)setTransport:(int)arg1 ;
-(unsigned)preferredFormat;
-(unsigned)formats;
-(id)operationAsString:(int)arg1 ;
-(int)StringAsOperation:(id)arg1 ;
-(void)setPreferredFormat:(unsigned)arg1 ;
-(void)setFormats:(unsigned)arg1 ;
-(BOOL)hasPreferredFormat;
-(id)transportAsString:(int)arg1 ;
-(int)StringAsTransport:(id)arg1 ;
-(void)setHasPreferredFormat:(BOOL)arg1 ;
@end

