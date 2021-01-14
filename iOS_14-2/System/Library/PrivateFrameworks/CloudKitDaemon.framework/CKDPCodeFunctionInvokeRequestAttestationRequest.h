/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPCodeFunctionInvokeRequestAttestationRequest : PBRequest <NSCopying> {

	NSData* _entropy;

}

@property (nonatomic,readonly) BOOL hasEntropy; 
@property (nonatomic,retain) NSData * entropy;               //@synthesize entropy=_entropy - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)entropy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEntropy:(NSData *)arg1 ;
-(BOOL)hasEntropy;
@end

