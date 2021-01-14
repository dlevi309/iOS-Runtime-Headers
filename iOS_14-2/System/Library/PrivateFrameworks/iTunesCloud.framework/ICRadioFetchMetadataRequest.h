/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, ICStoreRequestContext, NSData;

@interface ICRadioFetchMetadataRequest : NSObject <NSCopying> {

	NSArray* _storeAdamIDs;
	ICStoreRequestContext* _storeRequestContext;
	NSData* _timedMetadataData;
	long long _qualityOfService;

}

@property (nonatomic,copy) NSArray * storeAdamIDs;                                   //@synthesize storeAdamIDs=_storeAdamIDs - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * storeRequestContext;              //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (nonatomic,copy) NSData * timedMetadataData;                               //@synthesize timedMetadataData=_timedMetadataData - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
-(void)setQualityOfService:(long long)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(id)init;
-(NSData *)timedMetadataData;
-(NSArray *)storeAdamIDs;
-(void)setStoreAdamIDs:(NSArray *)arg1 ;
-(void)setTimedMetadataData:(NSData *)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(long long)qualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

