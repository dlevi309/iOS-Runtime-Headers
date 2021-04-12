/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)pending;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(BOOL)hasPushToken;
-(void)setRegistrationDataBytes:(NSData *)arg1 ;
-(BOOL)hasRegistrationDataBytes;
-(NSData *)registrationDataBytes;
@end

