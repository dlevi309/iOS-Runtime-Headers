/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionLayoutSectionSolver, _UIContentInsetsEnvironment;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSCollectionLayoutSection, _UICollectionPreferredSizes;

@interface _UICollectionSectionSolutionBookmark : NSObject {

	id<_UICollectionLayoutSectionSolver> _solution;
	NSCollectionLayoutSection* _section;
	CGRect _globalFrame;
	id<_UIContentInsetsEnvironment> _insetEnvironment;
	CGSize _contentSize;
	_UICollectionPreferredSizes* _preferredSizes;

}

@property (nonatomic,readonly) id<_UICollectionLayoutSectionSolver> solution;                 //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) CGRect globalFrame;                                            //@synthesize globalFrame=_globalFrame - In the implementation block
@property (nonatomic,readonly) id<_UIContentInsetsEnvironment> insetEnvironment;              //@synthesize insetEnvironment=_insetEnvironment - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                            //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) CGRect orthogonalContentLayoutFrame; 
@property (nonatomic,readonly) CGSize orthogonalContentSize; 
@property (nonatomic,readonly) NSCollectionLayoutSection * section;                           //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) _UICollectionPreferredSizes * preferredSizes;                  //@synthesize preferredSizes=_preferredSizes - In the implementation block
@property (nonatomic,readonly) CGPoint contentInsetsOffset; 
-(id<_UICollectionLayoutSectionSolver>)solution;
-(CGRect)orthogonalContentLayoutFrame;
-(id<_UIContentInsetsEnvironment>)insetEnvironment;
-(NSCollectionLayoutSection *)section;
-(CGSize)contentSize;
-(CGRect)globalFrame;
-(CGPoint)contentInsetsOffset;
-(id)copyWithGlobalFrame:(CGRect)arg1 ;
-(id)description;
-(_UICollectionPreferredSizes *)preferredSizes;
-(CGSize)orthogonalContentSize;
-(id)initWithSolution:(id)arg1 globalFrame:(CGRect)arg2 insetEnvironment:(id)arg3 contentSize:(CGSize)arg4 section:(id)arg5 preferredSizes:(id)arg6 ;
@end

