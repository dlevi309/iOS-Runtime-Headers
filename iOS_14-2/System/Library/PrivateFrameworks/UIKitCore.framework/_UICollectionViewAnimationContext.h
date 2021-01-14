/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionViewAnimationContext.h>
@class UICollectionViewLayout, NSArray;


@protocol _UICollectionViewAnimationContext <_UICollectionViewUpdateTranslating>
@property (nonatomic,readonly) UICollectionViewLayout * layout; 
@property (nonatomic,readonly) NSArray * updates; 
@property (nonatomic,copy) NSArray * appearingAttributes; 
@property (nonatomic,copy) NSArray * disappearingAttributes; 
@required
-(NSArray *)updates;
-(void)setAppearingAttributes:(id)arg1;
-(void)setDisappearingAttributes:(id)arg1;
-(NSArray *)appearingAttributes;
-(NSArray *)disappearingAttributes;
-(UICollectionViewLayout *)layout;

@end


@protocol _UICollectionViewUpdateTranslating;
@class UICollectionViewLayout, NSArray, NSMutableDictionary, NSDictionary, NSString;

@interface _UICollectionViewAnimationContext : NSObject <_UICollectionViewAnimationContext> {

	NSArray* _updates;
	NSMutableDictionary* _appearingAttributesDict;
	NSMutableDictionary* _disappearingAttributesDict;
	id<_UICollectionViewUpdateTranslating> _dataSourceTranslator;
	UICollectionViewLayout* _layout;
	NSDictionary* _appearingAnimations;
	NSDictionary* _disappearingAnimations;
	NSDictionary* _animationsForOnScreenViews;
	NSArray* _previouslyVisibleItemIndexPaths;
	NSArray* _currentlyVisibleItemIndexPaths;

}

@property (nonatomic,readonly) id<_UICollectionViewUpdateTranslating> dataSourceTranslator;              //@synthesize dataSourceTranslator=_dataSourceTranslator - In the implementation block
@property (nonatomic,readonly) NSArray * updates; 
@property (nonatomic,readonly) UICollectionViewLayout * layout;                                          //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSDictionary * appearingAnimations;                                         //@synthesize appearingAnimations=_appearingAnimations - In the implementation block
@property (nonatomic,retain) NSDictionary * disappearingAnimations;                                      //@synthesize disappearingAnimations=_disappearingAnimations - In the implementation block
@property (nonatomic,retain) NSDictionary * animationsForOnScreenViews;                                  //@synthesize animationsForOnScreenViews=_animationsForOnScreenViews - In the implementation block
@property (nonatomic,retain) NSArray * previouslyVisibleItemIndexPaths;                                  //@synthesize previouslyVisibleItemIndexPaths=_previouslyVisibleItemIndexPaths - In the implementation block
@property (nonatomic,retain) NSArray * currentlyVisibleItemIndexPaths;                                   //@synthesize currentlyVisibleItemIndexPaths=_currentlyVisibleItemIndexPaths - In the implementation block
@property (nonatomic,copy) NSArray * appearingAttributes; 
@property (nonatomic,copy) NSArray * disappearingAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initialIndexPathForFinalIndexPath:(id)arg1 ;
-(NSArray *)updates;
-(long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1 ;
-(long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(long long)initialSectionCount;
-(id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2 ;
-(id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(long long)finalSectionCount;
-(NSRange)initalSectionGlobalItemRangeForSection:(long long)arg1 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg1 ;
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1 ;
-(id)initWithDataSourceTranslator:(id)arg1 updates:(id)arg2 layout:(id)arg3 ;
-(NSRange)finalSectionGlobalItemRangeForSection:(long long)arg1 ;
-(NSDictionary *)appearingAnimations;
-(NSDictionary *)disappearingAnimations;
-(NSArray *)previouslyVisibleItemIndexPaths;
-(NSArray *)currentlyVisibleItemIndexPaths;
-(NSDictionary *)animationsForOnScreenViews;
-(void)setAppearingAttributes:(NSArray *)arg1 ;
-(void)setDisappearingAttributes:(NSArray *)arg1 ;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1 ;
-(void)setAppearingAnimations:(NSDictionary *)arg1 ;
-(void)setDisappearingAnimations:(NSDictionary *)arg1 ;
-(void)setPreviouslyVisibleItemIndexPaths:(NSArray *)arg1 ;
-(void)setCurrentlyVisibleItemIndexPaths:(NSArray *)arg1 ;
-(void)setAnimationsForOnScreenViews:(NSDictionary *)arg1 ;
-(NSArray *)appearingAttributes;
-(NSArray *)disappearingAttributes;
-(id<_UICollectionViewUpdateTranslating>)dataSourceTranslator;
-(UICollectionViewLayout *)layout;
@end

