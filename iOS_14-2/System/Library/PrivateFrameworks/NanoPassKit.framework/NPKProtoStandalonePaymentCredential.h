/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoStandalonePaymentCredential : PBCodable <NSCopying> {

	NSString* _expiration;
	NSString* _longDescription;
	NSString* _sanitizedPrimaryAccountNumber;

}

@property (nonatomic,readonly) BOOL hasSanitizedPrimaryAccountNumber; 
@property (nonatomic,retain) NSString * sanitizedPrimaryAccountNumber;              //@synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasExpiration; 
@property (nonatomic,retain) NSString * expiration;                                 //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,readonly) BOOL hasLongDescription; 
@property (nonatomic,retain) NSString * longDescription;                            //@synthesize longDescription=_longDescription - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setLongDescription:(NSString *)arg1 ;
-(NSString *)longDescription;
-(id)description;
-(NSString *)expiration;
-(void)setExpiration:(NSString *)arg1 ;
-(void)setSanitizedPrimaryAccountNumber:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sanitizedPrimaryAccountNumber;
-(BOOL)hasLongDescription;
-(BOOL)hasSanitizedPrimaryAccountNumber;
-(BOOL)hasExpiration;
@end

