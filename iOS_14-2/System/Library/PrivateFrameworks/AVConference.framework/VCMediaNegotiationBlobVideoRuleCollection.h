/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying> {

	unsigned _formats;
	unsigned _formatsExt1;
	int _operation;
	unsigned _preferredFormat;
	unsigned _preferredFormatExt1;
	int _transport;
	SCD_Struct_VC64 _has;

}

@property (assign,nonatomic) int transport;                             //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) int operation;                             //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) unsigned formats;                          //@synthesize formats=_formats - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredFormat; 
@property (assign,nonatomic) unsigned preferredFormat;                  //@synthesize preferredFormat=_preferredFormat - In the implementation block
@property (assign,nonatomic) BOOL hasFormatsExt1; 
@property (assign,nonatomic) unsigned formatsExt1;                      //@synthesize formatsExt1=_formatsExt1 - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredFormatExt1; 
@property (assign,nonatomic) unsigned preferredFormatExt1;              //@synthesize preferredFormatExt1=_preferredFormatExt1 - In the implementation block
-(id)dictionaryRepresentation;
-(void)setOperation:(int)arg1 ;
-(int)transport;
-(int)operation;
-(void)setTransport:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)formats;
-(id)operationAsString:(int)arg1 ;
-(int)StringAsOperation:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned)preferredFormat;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPreferredFormat:(unsigned)arg1 ;
-(void)setFormats:(unsigned)arg1 ;
-(unsigned)preferredFormatExt1;
-(void)setPreferredFormatExt1:(unsigned)arg1 ;
-(unsigned)formatsExt1;
-(void)setFormatsExt1:(unsigned)arg1 ;
-(BOOL)hasPreferredFormat;
-(BOOL)hasPreferredFormatExt1;
-(id)transportAsString:(int)arg1 ;
-(int)StringAsTransport:(id)arg1 ;
-(void)setHasPreferredFormat:(BOOL)arg1 ;
-(void)setHasFormatsExt1:(BOOL)arg1 ;
-(BOOL)hasFormatsExt1;
-(void)setHasPreferredFormatExt1:(BOOL)arg1 ;
@end

