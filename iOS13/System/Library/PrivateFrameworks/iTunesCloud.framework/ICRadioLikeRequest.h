/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICStoreRequestContext;

@interface ICRadioLikeRequest : NSObject <NSCopying> {

	long long _storeAdamID;
	long long _likeState;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationStringID;
	long long _qualityOfService;
	ICStoreRequestContext* _requestContext;

}

@property (assign,nonatomic) long long storeAdamID;                             //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (assign,nonatomic) long long likeState;                               //@synthesize likeState=_likeState - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                              //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;                               //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationStringID;                          //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)stationID;
-(ICStoreRequestContext *)requestContext;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)storeAdamID;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setStoreAdamID:(long long)arg1 ;
-(long long)likeState;
-(void)setLikeState:(long long)arg1 ;
@end

