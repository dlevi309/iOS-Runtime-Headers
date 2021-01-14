/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPResponseOperationHeaderAssetAuthorizationResponseHeaderInfo : PBCodable <NSCopying> {

	NSString* _headerKey;
	NSString* _headerValue;

}

@property (nonatomic,retain) NSString * headerKey;                //@synthesize headerKey=_headerKey - In the implementation block
@property (nonatomic,retain) NSString * headerValue;              //@synthesize headerValue=_headerValue - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHeaderKey:(NSString *)arg1 ;
-(void)setHeaderValue:(NSString *)arg1 ;
-(NSString *)headerKey;
-(NSString *)headerValue;
@end

