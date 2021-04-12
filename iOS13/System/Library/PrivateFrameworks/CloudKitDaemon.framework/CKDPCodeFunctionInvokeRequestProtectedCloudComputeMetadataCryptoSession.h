/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRoutingToken:(NSData *)arg1 ;
-(BOOL)hasRoutingToken;
-(NSData *)routingToken;
-(void)setWrappedInvocationKey:(NSData *)arg1 ;
-(BOOL)hasWrappedInvocationKey;
-(NSData *)wrappedInvocationKey;
@end

