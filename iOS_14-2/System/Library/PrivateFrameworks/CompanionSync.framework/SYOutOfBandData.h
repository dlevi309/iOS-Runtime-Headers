/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SYOutOfBandData : PBCodable <NSCopying> {

	NSData* _payload;

}

@property (nonatomic,retain) NSData * payload;              //@synthesize payload=_payload - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPayload:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)payload;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

