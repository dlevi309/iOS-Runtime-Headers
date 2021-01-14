/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
*/

#import <VisualLocalization/VisualLocalization-Structs.h>
#import <libobjc.A.dylib/VLLocalizationDataProvider.h>

@protocol VLLocalizationDataProviderDelegate;
@class GEOTileLoader, NSString, GEOApplicationAuditToken, geo_isolater, GEOTileData, GEOTileKeyMap, NSArray;

@interface VLTileDataProvider : NSObject <VLLocalizationDataProvider> {

	id<VLLocalizationDataProviderDelegate> _delegate;
	GEOTileLoader* _tileLoader;
	NSString* _tileLoaderClientID;
	GEOApplicationAuditToken* _auditToken;
	geo_isolater* _isolation;
	list<VLLocalizationDataKey, std::__1::allocator<VLLocalizationDataKey> >* _loadingKeys;
	list<VLLocalizationDataKey, std::__1::allocator<VLLocalizationDataKey> >* _recentFailures;
	list<VLLocalizationDataKey, std::__1::allocator<VLLocalizationDataKey> >* _recentUnsupportedTiles;
	SCD_Struct_VL8 _lastLoadedKey;
	GEOTileData* _lastLoadedData;
	GEOTileKeyMap* _pendingMetadataTiles;
	NSArray* _supportedFormatVersions;
	unsigned _maxSupportedFormatVersion;
	unsigned _lastFormatVersion;

}

@property (assign,nonatomic,__weak) id<VLLocalizationDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<VLLocalizationDataProviderDelegate>)delegate;
-(void)setDelegate:(id<VLLocalizationDataProviderDelegate>)arg1 ;
-(void)dealloc;
-(void)_commonInitWithTileLoader:(id)arg1 auditToken:(id)arg2 supportedFormatVersions:(id)arg3 ;
-(void)_fetchMetadataTile:(const GEOTileKey*)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_disburseMetadataTileForKey:(const GEOTileKey*)arg1 tileData:(id)arg2 error:(id)arg3 ;
-(void)_fetchDataTile:(const GEOTileKey*)arg1 originalKey:(const SCD_Struct_VL8*)arg2 additionalInfo:(const GEOVisualLocalizationTrackAdditionalInfo*)arg3 ;
-(void)_fetchMetadataForDataKey:(const SCD_Struct_VL8*)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchMetadataForCoordinate:(const SCD_Struct_VL6*)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)fileURLForKey:(const SCD_Struct_VL8*)arg1 error:(id*)arg2 ;
-(void)determineAvailabilityForCoordinate:(const SCD_Struct_VL6*)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)initWithAuditToken:(id)arg1 supportedFormatVersions:(id)arg2 ;
@end

