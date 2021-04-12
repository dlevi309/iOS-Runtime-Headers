/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)prekeySignature;
-(void)setPrekeySignature:(NSData *)arg1 ;
-(NSData *)prekey;
-(void)setPrekey:(NSData *)arg1 ;
@end

