/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSString, NSDictionary;

@interface ATXAssetsABHelper : NSObject {

	NSString* _groupIdentifier;
	NSDictionary* _abGroupContents;

}

@property (nonatomic,readonly) NSString * groupIdentifier;                  //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * abGroupContents;              //@synthesize abGroupContents=_abGroupContents - In the implementation block
+(void)initialize;
+(unsigned long long)saltedIndex:(unsigned long long)arg1 ;
+(unsigned char)indexForDevice;
+(void)setStaticIndexForDevice:(unsigned char)arg1 ;
+(id)decDeviceId;
+(void)setDefaultDeviceIndexPolicy;
+(void)setIndexProviderForDevice:(/*^block*/id)arg1 ;
+(unsigned long long)cachedSaltedIndex:(unsigned long long)arg1 ;
-(NSString *)groupIdentifier;
-(id)init;
-(id)initWithAssetContents:(id)arg1 indexForDevice:(unsigned char)arg2 ;
-(id)initWithAssetsForResource:(id)arg1 ofType:(id)arg2 specifiedABGroup:(id)arg3 ;
-(id)initWithAssetsForResource:(id)arg1 ofType:(id)arg2 ;
-(NSDictionary *)abGroupContents;
-(id)initWithAssetContents:(id)arg1 ;
-(id)initWithAssetContents:(id)arg1 specifiedABGroup:(id)arg2 indexForDevice:(unsigned char)arg3 ;
@end

