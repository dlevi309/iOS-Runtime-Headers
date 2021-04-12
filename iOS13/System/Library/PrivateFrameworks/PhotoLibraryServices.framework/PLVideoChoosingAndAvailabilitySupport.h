/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<PLVideoChoosingOptions>)options;
-(CGSize)size;
-(id<PLVideoResourceContext>)context;
-(id)initWithContext:(id)arg1 assetInformation:(id)arg2 options:(id)arg3 size:(CGSize)arg4 ;
-(id)_acceptableResourceVersions;
-(unsigned)_videoQualityLevelForRequest;
-(id)_chooseResourceDownloadRequired:(BOOL*)arg1 renderRequired:(BOOL*)arg2 ;
-(id)chooseResourceDownloadRequired:(BOOL*)arg1 renderRequired:(BOOL*)arg2 ;
-(id<PLVideoChoosingAssetInformation>)assetInformation;
@end

