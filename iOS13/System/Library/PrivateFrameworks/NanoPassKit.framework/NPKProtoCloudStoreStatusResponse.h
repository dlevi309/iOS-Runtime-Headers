/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoCloudStoreStatusResponse : PBCodable <NSCopying> {

	NSData* _accountInfoData;
	NSData* _errorData;
	BOOL _cloudStoreIsSetup;
	BOOL _pending;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                           //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountInfoData; 
@property (nonatomic,retain) NSData * accountInfoData;               //@synthesize accountInfoData=_accountInfoData - In the implementation block
@property (assign,nonatomic) BOOL hasCloudStoreIsSetup; 
@property (assign,nonatomic) BOOL cloudStoreIsSetup;                 //@synthesize cloudStoreIsSetup=_cloudStoreIsSetup - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                     //@synthesize errorData=_errorData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)pending;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(NSData *)errorData;
-(void)setAccountInfoData:(NSData *)arg1 ;
-(BOOL)hasAccountInfoData;
-(void)setCloudStoreIsSetup:(BOOL)arg1 ;
-(void)setHasCloudStoreIsSetup:(BOOL)arg1 ;
-(BOOL)hasCloudStoreIsSetup;
-(NSData *)accountInfoData;
-(BOOL)cloudStoreIsSetup;
@end

