/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)longDescription;
-(NSString *)expiration;
-(void)setLongDescription:(NSString *)arg1 ;
-(void)setExpiration:(NSString *)arg1 ;
-(void)setSanitizedPrimaryAccountNumber:(NSString *)arg1 ;
-(NSString *)sanitizedPrimaryAccountNumber;
-(BOOL)hasLongDescription;
-(BOOL)hasSanitizedPrimaryAccountNumber;
-(BOOL)hasExpiration;
@end

