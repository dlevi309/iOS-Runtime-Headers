/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadataCryptoSession : PBCodable <NSCopying> {

	NSData* _routingToken;
	NSData* _wrappedInvocationKey;

}

@property (nonatomic,readonly) BOOL hasWrappedInvocationKey; 
@property (nonatomic,retain) NSData * wrappedInvocationKey;               //@synthesize wrappedInvocationKey=_wrappedInvocationKey - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingToken; 
@property (nonatomic,retain) NSData * routingToken;                       //@synthesize routingToken=_routingToken - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRoutingToken:(NSData *)arg1 ;
-(BOOL)hasRoutingToken;
-(NSData *)routingToken;
-(void)setWrappedInvocationKey:(NSData *)arg1 ;
-(BOOL)hasWrappedInvocationKey;
-(NSData *)wrappedInvocationKey;
@end

