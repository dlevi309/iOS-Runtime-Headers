/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGContextualRule.h>

@class NSArray, NSMutableDictionary, PGGraph, NSString;

@interface PGBirthdayContextualRule : NSObject <PGContextualRule> {

	NSArray* _availablePersons;
	NSMutableDictionary* _personNodeByLocalIdentifier;
	PGGraph* _graph;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithGraph:(id)arg1 ;
-(BOOL)canProvideContextualKeyAssetsWithOptions:(id)arg1 ;
-(void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_filterCuratedAssets:(id)arg1 forHighlightItem:(id)arg2 ;
-(id)_fetchCuratedAssetsForHighlightItem:(id)arg1 intersectingAssets:(id)arg2 ;
-(id)_bestAssetInCuratedAssets:(id)arg1 forPerson:(id)arg2 contextualScore:(out double*)arg3 ;
-(id)_bestBirthdayCelebrationAssetForHighlightNode:(id)arg1 assetCollection:(id)arg2 ;
@end

