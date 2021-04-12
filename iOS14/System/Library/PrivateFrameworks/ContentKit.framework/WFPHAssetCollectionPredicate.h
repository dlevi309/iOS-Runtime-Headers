/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

