/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NGMPBPublicDevicePrekey : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _prekey;
	NSData* _prekeySignature;

}

@property (nonatomic,retain) NSData * prekey;                       //@synthesize prekey=_prekey - In the implementation block
@property (nonatomic,retain) NSData * prekeySignature;              //@synthesize prekeySignature=_prekeySignature - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setPrekeySignature:(NSData *)arg1 ;
-(NSData *)prekey;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)prekeySignature;
-(void)setPrekey:(NSData *)arg1 ;
@end

