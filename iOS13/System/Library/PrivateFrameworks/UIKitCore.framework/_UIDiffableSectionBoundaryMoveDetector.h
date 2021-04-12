/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIIdentifierDiffer, UIDiffableDataSourceInfo;
@class NSSet;

@interface _UIDiffableSectionBoundaryMoveDetector : NSObject {

	id<_UIIdentifierDiffer> _differ;
	id<UIDiffableDataSourceInfo> _beforeInfo;
	id<UIDiffableDataSourceInfo> _afterInfo;
	NSSet* _movePairs;
	BOOL _didShortCircuit;

}

@property (nonatomic,readonly) NSSet * movePairs;                 //@synthesize movePairs=_movePairs - In the implementation block
@property (nonatomic,readonly) BOOL didShortCircuit;              //@synthesize didShortCircuit=_didShortCircuit - In the implementation block
-(id)initWithItemDiffer:(id)arg1 beforeDataSourceInfo:(id)arg2 afterDataSourceInfo:(id)arg3 ;
-(NSSet *)movePairs;
-(id)_computeMovePairsFoundation;
-(id)_computeMovePairsSTL;
-(BOOL)didShortCircuit;
@end

