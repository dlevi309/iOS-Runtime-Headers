/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)assetUUIDs;
-(id)initWithTopAssetsResult:(id)arg1 ;
-(PSITopAssetsResult *)topAssetsResults;
@end

