/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoRemoteAdminPerformResponse : PBCodable <NSCopying> {

	int _httpStatus;
	NSData* _responseDictionary;
	unsigned _resultCode;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) unsigned resultCode;                       //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) BOOL hasResponseDictionary; 
@property (nonatomic,retain) NSData * responseDictionary;               //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatus; 
@property (assign,nonatomic) int httpStatus;                            //@synthesize httpStatus=_httpStatus - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)resultCode;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)responseDictionary;
-(void)setResultCode:(unsigned)arg1 ;
-(void)setResponseDictionary:(NSData *)arg1 ;
-(id)description;
-(void)setHttpStatus:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)httpStatus;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasHttpStatus:(BOOL)arg1 ;
-(BOOL)hasHttpStatus;
-(BOOL)hasResponseDictionary;
@end

