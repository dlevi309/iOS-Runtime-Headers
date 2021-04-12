/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAdVector:(ADAdVector *)arg1 ;
-(void)setObfuscationID:(NSString *)arg1 ;
-(void)setAddendum:(NSString *)arg1 ;
-(BOOL)hasAdVector;
-(void)setObfuscatedpTTR:(double)arg1 ;
-(void)setHasObfuscatedpTTR:(BOOL)arg1 ;
-(BOOL)hasObfuscatedpTTR;
-(BOOL)hasObfuscationID;
-(BOOL)hasAddendum;
-(ADAdVector *)adVector;
-(double)obfuscatedpTTR;
-(NSString *)obfuscationID;
-(NSString *)addendum;
@end

