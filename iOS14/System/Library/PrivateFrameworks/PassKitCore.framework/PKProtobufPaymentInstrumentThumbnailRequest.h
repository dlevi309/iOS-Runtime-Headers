/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufPaymentInstrumentThumbnailRequest : PBRequest <NSCopying> {

	double _height;
	double _width;
	NSString* _manifestHash;
	NSString* _passIdentifier;
	SCD_Struct_PK7 _has;

}

@property (nonatomic,readonly) BOOL hasPassIdentifier; 
@property (nonatomic,retain) NSString * passIdentifier;              //@synthesize passIdentifier=_passIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasManifestHash; 
@property (nonatomic,retain) NSString * manifestHash;                //@synthesize manifestHash=_manifestHash - In the implementation block
@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) double width;                           //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) double height;                          //@synthesize height=_height - In the implementation block
-(void)setHeight:(double)arg1 ;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(double)width;
-(BOOL)hasWidth;
-(unsigned)requestTypeCode;
-(void)setWidth:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)height;
-(id)description;
-(NSString *)passIdentifier;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(BOOL)hasPassIdentifier;
-(BOOL)hasManifestHash;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPassIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setManifestHash:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)manifestHash;
@end

