/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <Foundation/NSComparisonPredicate.h>

@class PHAssetCollection;

@interface WFPHAssetCollectionPredicate : NSComparisonPredicate {

	PHAssetCollection* _assetCollection;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
-(PHAssetCollection *)assetCollection;
-(id)initForAssetsInCollection:(id)arg1 ;
-(id)wf_photoLibraryFilteringPredicate;
@end

