/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PUMutableAssetExplorerReviewScreenAssetsDataSourceManager.h>

@class NSMutableDictionary, NSString;

@interface PUMutableAssetExplorerReviewScreenAssetsDataSourceManagerImplementation : NSObject <PUMutableAssetExplorerReviewScreenAssetsDataSourceManager> {

	NSMutableDictionary* _replacementAssetsByUUID;

}

@property (nonatomic,readonly) NSMutableDictionary * replacementAssetsByUUID;              //@synthesize replacementAssetsByUUID=_replacementAssetsByUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)replaceAssetInDataSourceWithAsset:(id)arg1 ;
-(void)removeReplacementAssetInDataSourceForUUID:(id)arg1 ;
-(id)initWithReplacementAssetsByUUID:(id)arg1 ;
-(NSMutableDictionary *)replacementAssetsByUUID;
@end

