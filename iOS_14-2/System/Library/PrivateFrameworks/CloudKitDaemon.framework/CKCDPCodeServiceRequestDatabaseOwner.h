/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKCDPCodeServiceRequestDatabaseOwner : PBCodable <NSCopying> {

	unsigned long long _numericValue;
	NSString* _stringValue;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasNumericValue; 
@property (assign,nonatomic) unsigned long long numericValue;              //@synthesize numericValue=_numericValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                       //@synthesize stringValue=_stringValue - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasStringValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setNumericValue:(unsigned long long)arg1 ;
-(BOOL)hasNumericValue;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)numericValue;
-(void)setHasNumericValue:(BOOL)arg1 ;
@end

