/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPAssetUploadTokenRetrieveRequestHeaderInfo : PBCodable <NSCopying> {

	NSString* _headerKey;
	NSString* _headerValue;

}

@property (nonatomic,retain) NSString * headerKey;                //@synthesize headerKey=_headerKey - In the implementation block
@property (nonatomic,retain) NSString * headerValue;              //@synthesize headerValue=_headerValue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHeaderKey:(NSString *)arg1 ;
-(void)setHeaderValue:(NSString *)arg1 ;
-(NSString *)headerKey;
-(NSString *)headerValue;
@end

