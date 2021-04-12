/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString, NSDictionary, NSArray;

@interface PPABHelper : NSObject {

	NSString* _abGroupIdentifier;
	NSDictionary* _abGroupContents;
	NSString* _naturalABGroupIdentifier;
	NSArray* _abGroupsInAsset;

}

@property (nonatomic,readonly) NSString * naturalABGroupIdentifier;              //@synthesize naturalABGroupIdentifier=_naturalABGroupIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * abGroupsInAsset;                        //@synthesize abGroupsInAsset=_abGroupsInAsset - In the implementation block
@property (nonatomic,readonly) NSString * abGroupIdentifier;                     //@synthesize abGroupIdentifier=_abGroupIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * abGroupContents;                   //@synthesize abGroupContents=_abGroupContents - In the implementation block
+(void)initialize;
+(void)setDefaultDeviceIndexPolicy;
+(unsigned char)indexForDevice;
+(unsigned long long)cachedSaltedIndex:(unsigned long long)arg1 ;
+(unsigned long long)saltedIndex:(unsigned long long)arg1 ;
+(void)setIndexForDevice:(/*^block*/id)arg1 ;
+(unsigned long long)randomSaltedIndex:(unsigned long long)arg1 ;
+(unsigned long long)incrementalSaltedIndex:(unsigned long long)arg1 ;
+(void)setStaticIndexForDevice:(unsigned char)arg1 ;
+(unsigned long long)cachedSalt;
+(id)ppDeviceId;
-(id)init;
-(id)initWithAssetContents:(id)arg1 specifiedABGroup:(id)arg2 indexForDevice:(unsigned char)arg3 ;
-(NSDictionary *)abGroupContents;
-(NSString *)abGroupIdentifier;
-(BOOL)setABGroupIdentifier:(id)arg1 assetContents:(id)arg2 ;
-(NSString *)naturalABGroupIdentifier;
-(NSArray *)abGroupsInAsset;
@end

