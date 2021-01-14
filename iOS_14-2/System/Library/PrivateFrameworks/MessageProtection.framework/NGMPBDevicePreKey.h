/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NGMPBP256Key, NSData;

@interface NGMPBDevicePreKey : PBCodable <NSCopying> {

	double _timestamp;
	NGMPBP256Key* _dhKey;
	NSData* _prekeySignature;

}

@property (nonatomic,readonly) BOOL hasDhKey; 
@property (nonatomic,retain) NGMPBP256Key * dhKey;                  //@synthesize dhKey=_dhKey - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSData * prekeySignature;              //@synthesize prekeySignature=_prekeySignature - In the implementation block
-(id)dictionaryRepresentation;
-(NGMPBP256Key *)dhKey;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setPrekeySignature:(NSData *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDhKey:(NGMPBP256Key *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDhKey;
-(NSData *)prekeySignature;
@end

