/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSArray;

@interface PGTitleSpecCollection : NSObject {

	NSArray* _specPools;

}

@property (nonatomic,readonly) NSArray * specPools;              //@synthesize specPools=_specPools - In the implementation block
+(id)collectionWithSpecPools:(id)arg1 ;
-(id)description;
-(id)initWithSpecPools:(id)arg1 ;
-(id)allPossibleTitlesWithMomentNodes:(id)arg1 ;
-(id)allPossibleTitlesWithHighlightMomentNodes:(id)arg1 ;
-(id)_allPossibleTitlesWithMomentNodes:(id)arg1 forHighlight:(BOOL)arg2 ;
-(NSArray *)specPools;
@end

