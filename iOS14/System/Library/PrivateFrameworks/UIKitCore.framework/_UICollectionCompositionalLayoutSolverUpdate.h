/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionViewUpdateTranslating;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, _UIDataSourceSnapshotter;

@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject {

	NSArray* _updateItems;
	id<_UICollectionViewUpdateTranslating> _updateTranslator;
	_UIDataSourceSnapshotter* _finalDataSourceSnapshot;
	CGRect _visibleBounds;

}

@property (nonatomic,readonly) CGRect visibleBounds;                                                 //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,readonly) NSArray * updateItems;                                                //@synthesize updateItems=_updateItems - In the implementation block
@property (nonatomic,readonly) id<_UICollectionViewUpdateTranslating> updateTranslator;              //@synthesize updateTranslator=_updateTranslator - In the implementation block
@property (nonatomic,readonly) _UIDataSourceSnapshotter * finalDataSourceSnapshot;                   //@synthesize finalDataSourceSnapshot=_finalDataSourceSnapshot - In the implementation block
+(id)solverUpdateForVisibleBounds:(CGRect)arg1 updateItems:(id)arg2 updateTranslator:(id)arg3 finalDataSourceSnapshot:(id)arg4 ;
-(NSArray *)updateItems;
-(CGRect)visibleBounds;
-(id<_UICollectionViewUpdateTranslating>)updateTranslator;
-(id)initWithVisibleBounds:(CGRect)arg1 updateItems:(id)arg2 updateTranslator:(id)arg3 finalDataSourceSnapshot:(id)arg4 ;
-(_UIDataSourceSnapshotter *)finalDataSourceSnapshot;
@end

