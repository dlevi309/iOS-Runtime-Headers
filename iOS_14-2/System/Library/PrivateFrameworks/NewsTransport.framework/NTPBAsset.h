/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NTPBAsset : PBCodable <FCKeyValueStoreCoding, NSCopying> {

	int _error;
	int _type;
	NSData* _wrappingKeyID;
	SCD_Struct_CO1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasWrappingKeyID; 
@property (nonatomic,retain) NSData * wrappingKeyID;                //@synthesize wrappingKeyID=_wrappingKeyID - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                             //@synthesize error=_error - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(void)writeToKeyValuePair:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(void)setWrappingKeyID:(NSData *)arg1 ;
-(NSData *)wrappingKeyID;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setError:(int)arg1 ;
-(int)error;
-(BOOL)hasWrappingKeyID;
-(NSString *)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

