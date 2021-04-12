/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)responseHeaders;
-(NSData *)activationData;
-(void)setActivationData:(NSData *)arg1 ;
-(void)setResponseHeaders:(NSData *)arg1 ;
@end

