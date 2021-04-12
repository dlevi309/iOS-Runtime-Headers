/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

