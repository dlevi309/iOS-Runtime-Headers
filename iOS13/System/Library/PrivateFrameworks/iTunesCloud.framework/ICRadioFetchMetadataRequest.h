/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(NSData *)timedMetadataData;
-(NSArray *)storeAdamIDs;
-(void)setStoreAdamIDs:(NSArray *)arg1 ;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setTimedMetadataData:(NSData *)arg1 ;
@end

