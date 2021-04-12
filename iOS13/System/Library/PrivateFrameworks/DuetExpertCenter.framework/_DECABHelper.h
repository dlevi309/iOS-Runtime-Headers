/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@class NSString, NSDictionary;

@interface _DECABHelper : NSObject {

	NSString* _groupIdentifier;
	NSDictionary* _abGroupContents;

}

@property (nonatomic,readonly) NSString * groupIdentifier;                  //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * abGroupContents;              //@synthesize abGroupContents=_abGroupContents - In the implementation block
+(void)initialize;
+(void)setDefaultDeviceIndexPolicy;
+(unsigned char)indexForDevice;
+(unsigned long long)cachedSaltedIndex:(unsigned long long)arg1 ;
+(unsigned long long)saltedIndex:(unsigned long long)arg1 ;
+(id)decDeviceId;
+(void)setIndexForDevice:(/*^block*/id)arg1 ;
+(unsigned long long)randomSaltedIndex:(unsigned long long)arg1 ;
+(unsigned long long)incrementalSaltedIndex:(unsigned long long)arg1 ;
+(void)setStaticIndexForDevice:(unsigned char)arg1 ;
-(id)init;
-(NSString *)groupIdentifier;
-(id)initWithAssetContents:(id)arg1 indexForDevice:(unsigned char)arg2 ;
-(id)initWithAssetContents:(id)arg1 specifiedABGroup:(id)arg2 indexForDevice:(unsigned char)arg3 ;
-(id)initWithAssetsForResource:(id)arg1 ofType:(id)arg2 specifiedABGroup:(id)arg3 ;
-(id)initWithAssetContents:(id)arg1 ;
-(id)initWithAssetsForResource:(id)arg1 ofType:(id)arg2 ;
-(NSDictionary *)abGroupContents;
@end

