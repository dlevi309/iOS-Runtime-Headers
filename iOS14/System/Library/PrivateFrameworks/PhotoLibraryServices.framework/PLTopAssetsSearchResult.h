/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PSITopAssetsResult, NSArray;

@interface PLTopAssetsSearchResult : NSObject {

	PSITopAssetsResult* _topAssetsResults;

}

@property (nonatomic,readonly) PSITopAssetsResult * topAssetsResults;              //@synthesize topAssetsResults=_topAssetsResults - In the implementation block
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (nonatomic,readonly) NSArray * assetUUIDs; 
-(unsigned long long)assetCount;
-(id)initWithTopAssetsResult:(id)arg1 ;
-(NSArray *)assetUUIDs;
-(PSITopAssetsResult *)topAssetsResults;
@end

