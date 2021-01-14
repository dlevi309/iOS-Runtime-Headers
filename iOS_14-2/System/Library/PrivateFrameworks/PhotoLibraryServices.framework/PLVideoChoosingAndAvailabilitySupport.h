/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLVideoResourceContext, PLVideoChoosingAssetInformation, PLVideoChoosingOptions;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLVideoChoosingAndAvailabilitySupport : NSObject {

	id<PLVideoResourceContext> _context;
	id<PLVideoChoosingAssetInformation> _assetInformation;
	id<PLVideoChoosingOptions> _options;
	CGSize _size;

}

@property (nonatomic,readonly) id<PLVideoResourceContext> context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<PLVideoChoosingAssetInformation> assetInformation;              //@synthesize assetInformation=_assetInformation - In the implementation block
@property (nonatomic,readonly) id<PLVideoChoosingOptions> options;                                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) CGSize size;                                                       //@synthesize size=_size - In the implementation block
-(id)chooseResourceDownloadRequired:(BOOL*)arg1 error:(id*)arg2 ;
-(id)initWithContext:(id)arg1 assetInformation:(id)arg2 options:(id)arg3 size:(CGSize)arg4 ;
-(id)_acceptableResourceVersions;
-(unsigned)_videoQualityLevelForRequest;
-(id)_ensureOriginalsAreHighestQuality:(id)arg1 ;
-(id)_chooseResourceDownloadRequired:(BOOL*)arg1 error:(id*)arg2 ;
-(id<PLVideoChoosingAssetInformation>)assetInformation;
-(CGSize)size;
-(id<PLVideoChoosingOptions>)options;
-(id<PLVideoResourceContext>)context;
@end

