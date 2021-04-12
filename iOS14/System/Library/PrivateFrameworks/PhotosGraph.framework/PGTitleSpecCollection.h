/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

