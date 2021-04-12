/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
*/


@interface DCAssetFetcherContext : NSObject {

	BOOL _allowCatalogRefresh;
	BOOL _ignoreCachedMetadata;

}

@property (assign,nonatomic) BOOL allowCatalogRefresh;               //@synthesize allowCatalogRefresh=_allowCatalogRefresh - In the implementation block
@property (assign,nonatomic) BOOL ignoreCachedMetadata;              //@synthesize ignoreCachedMetadata=_ignoreCachedMetadata - In the implementation block
-(id)description;
-(BOOL)allowCatalogRefresh;
-(void)setAllowCatalogRefresh:(BOOL)arg1 ;
-(BOOL)ignoreCachedMetadata;
-(void)setIgnoreCachedMetadata:(BOOL)arg1 ;
@end

