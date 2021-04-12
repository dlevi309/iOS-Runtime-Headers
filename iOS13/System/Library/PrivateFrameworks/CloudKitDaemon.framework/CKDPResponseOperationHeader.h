/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable <NSCopying> {

	NSMutableArray* _assetAuthorizationResponses;

}

@property (nonatomic,retain) NSMutableArray * assetAuthorizationResponses;              //@synthesize assetAuthorizationResponses=_assetAuthorizationResponses - In the implementation block
+(Class)assetAuthorizationResponsesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addAssetAuthorizationResponses:(id)arg1 ;
-(unsigned long long)assetAuthorizationResponsesCount;
-(void)clearAssetAuthorizationResponses;
-(id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)assetAuthorizationResponses;
-(void)setAssetAuthorizationResponses:(NSMutableArray *)arg1 ;
@end

