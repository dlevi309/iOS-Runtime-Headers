/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)httpStatus;
-(void)setHttpStatus:(int)arg1 ;
-(void)setHasHttpStatus:(BOOL)arg1 ;
-(BOOL)hasHttpStatus;
-(NSData *)responseDictionary;
-(void)setResultCode:(unsigned)arg1 ;
-(void)setResponseDictionary:(NSData *)arg1 ;
-(unsigned)resultCode;
-(BOOL)hasResponseDictionary;
@end

