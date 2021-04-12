/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAssetSearchResult.h>

@class NSArray, NSMutableArray;

@interface PLCombinedAssetSearchResult : PLAssetSearchResult {

	unsigned long long _assetCount;
	NSArray* _assetUUIDs;
	BOOL _resultsCanOverlap;
	NSMutableArray* _assetSearchResults;

}

@property (nonatomic,retain) NSMutableArray * assetSearchResults;              //@synthesize assetSearchResults=_assetSearchResults - In the implementation block
@property (assign,nonatomic) BOOL resultsCanOverlap;                           //@synthesize resultsCanOverlap=_resultsCanOverlap - In the implementation block
@property (nonatomic,readonly) NSArray * groupResults; 
-(unsigned long long)assetCount;
-(id)assetUUIDs;
-(id)initWithAssetSearchResults:(id)arg1 canOverlap:(BOOL)arg2 ;
-(id)initWithAssetSearchResult:(id)arg1 ;
-(void)addAssetSearchResult:(id)arg1 isMainSearchResult:(BOOL)arg2 ;
-(unsigned long long)categoryMask;
-(id)groupDescription;
-(NSArray *)groupResults;
-(NSMutableArray *)assetSearchResults;
-(void)setAssetSearchResults:(NSMutableArray *)arg1 ;
-(BOOL)resultsCanOverlap;
-(void)setResultsCanOverlap:(BOOL)arg1 ;
@end

