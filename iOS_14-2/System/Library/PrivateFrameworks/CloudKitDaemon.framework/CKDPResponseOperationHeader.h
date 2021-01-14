/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable <NSCopying> {

	NSMutableArray* _assetAuthorizationResponses;
	NSMutableArray* _throttleConfigs;

}

@property (nonatomic,retain) NSMutableArray * assetAuthorizationResponses;              //@synthesize assetAuthorizationResponses=_assetAuthorizationResponses - In the implementation block
@property (nonatomic,retain) NSMutableArray * throttleConfigs;                          //@synthesize throttleConfigs=_throttleConfigs - In the implementation block
+(Class)assetAuthorizationResponsesType;
+(Class)throttleConfigType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAssetAuthorizationResponses:(id)arg1 ;
-(void)addThrottleConfig:(id)arg1 ;
-(unsigned long long)assetAuthorizationResponsesCount;
-(void)clearAssetAuthorizationResponses;
-(id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)throttleConfigsCount;
-(void)clearThrottleConfigs;
-(id)throttleConfigAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)assetAuthorizationResponses;
-(void)setAssetAuthorizationResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)throttleConfigs;
-(void)setThrottleConfigs:(NSMutableArray *)arg1 ;
@end

