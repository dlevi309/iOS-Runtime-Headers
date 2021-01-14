/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoUpdateAccountWithIdentifierResponse : PBCodable <NSCopying> {

	NSData* _accountData;
	NSData* _errorData;
	BOOL _pending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                       //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountData; 
@property (nonatomic,retain) NSData * accountData;               //@synthesize accountData=_accountData - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                 //@synthesize errorData=_errorData - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)accountData;
-(void)setAccountData:(NSData *)arg1 ;
-(id)description;
-(BOOL)pending;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)errorData;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(BOOL)hasAccountData;
@end

