/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionLayoutSectionSolver;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSCollectionLayoutSection, _UICollectionPreferredSizes;

@interface _UICollectionSectionSolutionBookmark : NSObject {

	id<_UICollectionLayoutSectionSolver> _solution;
	NSCollectionLayoutSection* _section;
	CGRect _globalFrame;
	CGSize _contentSize;
	_UICollectionPreferredSizes* _preferredSizes;

}

@property (nonatomic,readonly) id<_UICollectionLayoutSectionSolver> solution;              //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) CGRect globalFrame;                                         //@synthesize globalFrame=_globalFrame - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                         //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) CGRect orthogonalContentLayoutFrame; 
@property (nonatomic,readonly) CGSize orthogonalContentSize; 
@property (nonatomic,readonly) NSCollectionLayoutSection * section;                        //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) _UICollectionPreferredSizes * preferredSizes;               //@synthesize preferredSizes=_preferredSizes - In the implementation block
-(id)description;
-(CGSize)contentSize;
-(id<_UICollectionLayoutSectionSolver>)solution;
-(NSCollectionLayoutSection *)section;
-(_UICollectionPreferredSizes *)preferredSizes;
-(CGRect)globalFrame;
-(CGRect)orthogonalContentLayoutFrame;
-(CGSize)orthogonalContentSize;
-(id)initWithSolution:(id)arg1 globalFrame:(CGRect)arg2 contentSize:(CGSize)arg3 section:(id)arg4 preferredSizes:(id)arg5 ;
-(id)copyWithGlobalFrame:(CGRect)arg1 ;
-(id)initWithSolution:(id)arg1 globalFrame:(CGRect)arg2 contentSize:(CGSize)arg3 section:(id)arg4 ;
@end

