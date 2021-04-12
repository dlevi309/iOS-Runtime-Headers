/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <AssetExplorer/AEAssetPackage.h>

@interface AEPHAssetPackage : AEAssetPackage {

	id _resourcePinningHandle;

}

@property (nonatomic,readonly) id resourcePinningHandle;              //@synthesize resourcePinningHandle=_resourcePinningHandle - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithAssetIdentifier:(id)arg1 durableURLs:(id)arg2 suppressedTypes:(id)arg3 sidecar:(id)arg4 resourcePinningHandle:(id)arg5 ;
-(id)resourcePinningHandle;
@end

