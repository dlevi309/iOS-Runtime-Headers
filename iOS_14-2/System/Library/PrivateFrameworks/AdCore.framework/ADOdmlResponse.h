/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ADAdVector, NSString;

@interface ADOdmlResponse : PBCodable <NSCopying> {

	double _obfuscatedpTTR;
	ADAdVector* _adVector;
	NSString* _addendum;
	NSString* _obfuscationID;
	SCD_Struct_AD3 _has;

}

@property (nonatomic,readonly) BOOL hasAdVector; 
@property (nonatomic,retain) ADAdVector * adVector;                 //@synthesize adVector=_adVector - In the implementation block
@property (assign,nonatomic) BOOL hasObfuscatedpTTR; 
@property (assign,nonatomic) double obfuscatedpTTR;                 //@synthesize obfuscatedpTTR=_obfuscatedpTTR - In the implementation block
@property (nonatomic,readonly) BOOL hasObfuscationID; 
@property (nonatomic,retain) NSString * obfuscationID;              //@synthesize obfuscationID=_obfuscationID - In the implementation block
@property (nonatomic,readonly) BOOL hasAddendum; 
@property (nonatomic,retain) NSString * addendum;                   //@synthesize addendum=_addendum - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(ADAdVector *)adVector;
-(NSString *)addendum;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAdVector:(ADAdVector *)arg1 ;
-(void)setObfuscationID:(NSString *)arg1 ;
-(void)setAddendum:(NSString *)arg1 ;
-(BOOL)hasAdVector;
-(void)setObfuscatedpTTR:(double)arg1 ;
-(void)setHasObfuscatedpTTR:(BOOL)arg1 ;
-(BOOL)hasObfuscatedpTTR;
-(BOOL)hasObfuscationID;
-(BOOL)hasAddendum;
-(double)obfuscatedpTTR;
-(NSString *)obfuscationID;
@end

