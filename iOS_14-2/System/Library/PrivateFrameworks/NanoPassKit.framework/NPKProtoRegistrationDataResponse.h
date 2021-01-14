/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoRegistrationDataResponse : PBCodable <NSCopying> {

	NSString* _pushToken;
	NSData* _registrationDataBytes;
	BOOL _pending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                 //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasRegistrationDataBytes; 
@property (nonatomic,retain) NSData * registrationDataBytes;               //@synthesize registrationDataBytes=_registrationDataBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasPushToken; 
@property (nonatomic,retain) NSString * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
-(void)setPushToken:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)pushToken;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)pending;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(BOOL)hasPushToken;
-(void)setRegistrationDataBytes:(NSData *)arg1 ;
-(BOOL)hasRegistrationDataBytes;
-(NSData *)registrationDataBytes;
@end

