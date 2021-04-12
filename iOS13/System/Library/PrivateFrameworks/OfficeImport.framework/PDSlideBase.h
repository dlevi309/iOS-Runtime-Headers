/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, NSArray, OADBackground, PDAnimation, PDTransition, OADTableStyle;

@interface PDSlideBase : NSObject {

	unsigned mSlideId;
	NSString* mName;
	NSArray* mDrawables;
	OADBackground* mBackground;
	PDAnimation* mAnimation;
	PDTransition* mTransition;
	PDTransition* mPpt2011Transition;
	OADTableStyle* mDefaultTableStyle;
	unsigned mIsHidden : 1;
	unsigned mIsDoneWithContent : 1;

}

@property (assign,nonatomic) unsigned slideId; 
+(int)inheritedPlaceholderType:(int)arg1 ;
-(id)init;
-(id)description;
-(id)name;
-(void)setName:(id)arg1 ;
-(BOOL)isHidden;
-(id)background;
-(void)setIsHidden:(BOOL)arg1 ;
-(id)animation;
-(id)transition;
-(void)setBackground:(id)arg1 ;
-(void)setTransition:(id)arg1 ;
-(id)colorMap;
-(id)placeholders;
-(id)colorScheme;
-(id)drawables;
-(id)styleMatrix;
-(id)defaultTheme;
-(id)fontScheme;
-(id)parentSlideBase;
-(void)removeUnnecessaryOverrides;
-(id)drawingTheme;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(void)doneWithContent;
-(id)defaultTableStyle;
-(void)setDefaultTableStyle:(id)arg1 ;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(void)setDrawables:(id)arg1 ;
-(void)addSlideNumberPlaceholder:(id)arg1 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)defaultTextListStyle;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(BOOL)arg3 overrideIndex:(BOOL)arg4 ;
-(id)inheritedTextStyleForPlaceholderType:(int)arg1 ;
-(void)setUpPropertyHierarchyForDrawable:(id)arg1 ;
-(void)setUpPropertyHierarchyForDrawablePreservingEffectiveValues:(id)arg1 ;
-(void)setDrawablesNoHierarchy:(id)arg1 ;
-(void)setUpDrawablePropertyHierarchy;
-(void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2 state:(id)arg3 ;
-(id)ppt2011Transition;
-(void)setPpt2011Transition:(id)arg1 ;
-(BOOL)hasPpt10Animations;
-(BOOL)hasPpt9Animations;
-(void)generatePpt9Animations:(id)arg1 ;
-(unsigned)slideId;
-(void)setSlideId:(unsigned)arg1 ;
@end

