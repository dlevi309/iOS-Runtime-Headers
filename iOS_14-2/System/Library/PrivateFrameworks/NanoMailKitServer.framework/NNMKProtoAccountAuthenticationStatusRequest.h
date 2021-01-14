/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NNMKProtoAccountAuthenticationStatusRequest : PBRequest <NSCopying> {

	double _requestTime;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasRequestTime; 
@property (assign,nonatomic) double requestTime;               //@synthesize requestTime=_requestTime - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(double)requestTime;
-(unsigned long long)hash;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestTime:(double)arg1 ;
-(BOOL)hasRequestTime;
-(BOOL)isEqual:(id)arg1 ;
@end

