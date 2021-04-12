/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIIdentifierDiffer, _UIDiffableDataSourceState;
@class NSSet;

@interface _UIDiffableSectionBoundaryMoveDetector : NSObject {

	id<_UIIdentifierDiffer> _differ;
	id<_UIDiffableDataSourceState> _beforeState;
	id<_UIDiffableDataSourceState> _afterState;
	NSSet* _movePairs;
	BOOL _didShortCircuit;

}

@property (nonatomic,readonly) NSSet * movePairs;                 //@synthesize movePairs=_movePairs - In the implementation block
@property (nonatomic,readonly) BOOL didShortCircuit;              //@synthesize didShortCircuit=_didShortCircuit - In the implementation block
-(NSSet *)movePairs;
-(id)_computeMovePairsFoundation;
-(id)initWithItemDiffer:(id)arg1 beforeDataSourceState:(id)arg2 afterDataSourceState:(id)arg3 ;
-(BOOL)didShortCircuit;
-(id)_computeMovePairsSTL;
@end

