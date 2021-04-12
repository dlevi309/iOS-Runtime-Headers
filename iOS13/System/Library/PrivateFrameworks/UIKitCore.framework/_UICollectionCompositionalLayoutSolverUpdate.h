/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionViewUpdateTranslating;
@class NSArray, _UIDataSourceSnapshotter;

@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject {

	NSArray* _updateItems;
	id<_UICollectionViewUpdateTranslating> _updateTranslator;
	_UIDataSourceSnapshotter* _finalDataSourceSnapshot;

}

@property (nonatomic,readonly) NSArray * updateItems;                                                //@synthesize updateItems=_updateItems - In the implementation block
@property (nonatomic,readonly) id<_UICollectionViewUpdateTranslating> updateTranslator;              //@synthesize updateTranslator=_updateTranslator - In the implementation block
@property (nonatomic,readonly) _UIDataSourceSnapshotter * finalDataSourceSnapshot;                   //@synthesize finalDataSourceSnapshot=_finalDataSourceSnapshot - In the implementation block
+(id)solverUpdateWithUpdateItems:(id)arg1 updateTranslator:(id)arg2 finalDataSourceSnapshot:(id)arg3 ;
-(_UIDataSourceSnapshotter *)finalDataSourceSnapshot;
-(id<_UICollectionViewUpdateTranslating>)updateTranslator;
-(NSArray *)updateItems;
-(id)initWithUpdateItems:(id)arg1 updateTranslator:(id)arg2 finalDataSourceSnapshot:(id)arg3 ;
@end

