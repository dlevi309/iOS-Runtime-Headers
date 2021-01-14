/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)colorMap;
-(id)background;
-(void)setBackground:(id)arg1 ;
-(id)animation;
-(BOOL)isHidden;
-(id)init;
-(id)placeholders;
-(id)name;
-(id)description;
-(void)setTransition:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setIsHidden:(BOOL)arg1 ;
-(unsigned)slideId;
-(id)transition;
-(id)drawables;
-(id)colorScheme;
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
-(void)setSlideId:(unsigned)arg1 ;
@end

