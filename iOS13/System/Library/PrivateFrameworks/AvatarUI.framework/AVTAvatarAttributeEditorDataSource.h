/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTTaskScheduler;
@class AVTAvatarAttributeEditorState, NSArray, NSMutableDictionary, AVTUIEnvironment;

@interface AVTAvatarAttributeEditorDataSource : NSObject {

	unsigned long long _currentCategoryIndex;
	AVTAvatarAttributeEditorState* _editorState;
	NSArray* _categories;
	NSMutableDictionary* _sectionControllers;
	AVTUIEnvironment* _environment;
	id<AVTTaskScheduler> _renderingScheduler;

}

@property (nonatomic,retain) NSArray * categories;                                       //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionControllers;                   //@synthesize sectionControllers=_sectionControllers - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                           //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> renderingScheduler;                  //@synthesize renderingScheduler=_renderingScheduler - In the implementation block
@property (assign,nonatomic) unsigned long long currentCategoryIndex;                    //@synthesize currentCategoryIndex=_currentCategoryIndex - In the implementation block
@property (nonatomic,readonly) AVTAvatarAttributeEditorState * editorState;              //@synthesize editorState=_editorState - In the implementation block
+(unsigned long long)indexForCurrentCategoryGivenPreferredIdentifier:(id)arg1 categories:(id)arg2 ;
+(id)sectionControllerForSection:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3 ;
-(AVTUIEnvironment *)environment;
-(long long)numberOfCategories;
-(NSArray *)categories;
-(id)categoryAtIndex:(long long)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(id)sectionControllerForSection:(id)arg1 ;
-(NSMutableDictionary *)sectionControllers;
-(void)setSectionControllers:(NSMutableDictionary *)arg1 ;
-(id<AVTTaskScheduler>)renderingScheduler;
-(void)setCurrentCategoryIndex:(unsigned long long)arg1 ;
-(void)discardControllersForNonCurrentCategory;
-(unsigned long long)currentCategoryIndex;
-(id)sectionForIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2 ;
-(AVTAvatarAttributeEditorState *)editorState;
-(id)initWithCategories:(id)arg1 currentCategoryIdentifier:(id)arg2 renderingScheduler:(id)arg3 editorState:(id)arg4 environment:(id)arg5 ;
-(void)reloadWithCategories:(id)arg1 currentCategoryIndex:(unsigned long long)arg2 ;
-(id)namesForCategories;
-(long long)numberOfSectionsForCategoryAtIndex:(long long)arg1 ;
-(id)sectionControllerForSectionIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2 ;
-(long long)indexForSection:(id)arg1 inCategoryAtIndex:(long long)arg2 ;
-(id)indexesForSectionsExcludingSectionsWithIdentifiers:(id)arg1 inCategoryAtIndex:(long long)arg2 ;
-(id)indexesForSectionsPresentIn:(id)arg1 butNotIn:(id)arg2 ;
-(id)currentCategoryIdentifier;
-(BOOL)shouldDisplaySectionWithDisplayCondition:(id)arg1 inCategoryAtIndex:(unsigned long long)arg2 ;
-(BOOL)shouldDisplaySectionForCategory:(long long)arg1 ;
@end

