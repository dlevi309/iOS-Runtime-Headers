/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PBBProtoHandleActivationData : PBCodable <NSCopying> {

	NSData* _activationData;
	NSData* _responseHeaders;

}

@property (nonatomic,retain) NSData * activationData;               //@synthesize activationData=_activationData - In the implementation block
@property (nonatomic,retain) NSData * responseHeaders;              //@synthesize responseHeaders=_responseHeaders - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSData *)activationData;
-(void)setActivationData:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setResponseHeaders:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)responseHeaders;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

