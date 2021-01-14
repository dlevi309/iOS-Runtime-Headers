/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorModelManagerDelegateInternal.h>

@protocol AVTTaskScheduler;
@class NSArray, NSMutableDictionary, AVTUIEnvironment, NSString;

@interface AVTAvatarAttributeEditorDataSource : NSObject <AVTAvatarAttributeEditorModelManagerDelegateInternal> {

	unsigned long long _currentCategoryIndex;
	NSArray* _categories;
	NSMutableDictionary* _sectionControllers;
	AVTUIEnvironment* _environment;
	id<AVTTaskScheduler> _renderingScheduler;

}

@property (nonatomic,retain) NSArray * categories;                                   //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionControllers;               //@synthesize sectionControllers=_sectionControllers - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                       //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> renderingScheduler;              //@synthesize renderingScheduler=_renderingScheduler - In the implementation block
@property (assign,nonatomic) unsigned long long currentCategoryIndex;                //@synthesize currentCategoryIndex=_currentCategoryIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)indexForCurrentCategoryGivenPreferredIdentifier:(id)arg1 categories:(id)arg2 ;
+(id)sectionControllerForSection:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSMutableDictionary *)sectionControllers;
-(id)categoryAtIndex:(long long)arg1 ;
-(NSArray *)categories;
-(id<AVTTaskScheduler>)renderingScheduler;
-(long long)numberOfCategories;
-(id)sectionControllerForSection:(id)arg1 ;
-(unsigned long long)currentCategoryIndex;
-(id)initWithCategories:(id)arg1 currentCategoryIdentifier:(id)arg2 renderingScheduler:(id)arg3 environment:(id)arg4 ;
-(void)setCurrentCategoryIndex:(unsigned long long)arg1 ;
-(AVTUIEnvironment *)environment;
-(void)discardControllersForNonCurrentCategory;
-(id)sectionForIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2 ;
-(BOOL)shouldDisplaySectionWithDisplayCondition:(id)arg1 inCategoryAtIndex:(unsigned long long)arg2 ;
-(id)initWithCategories:(id)arg1 currentCategoryIdentifier:(id)arg2 renderingScheduler:(id)arg3 ;
-(void)reloadWithCategories:(id)arg1 currentCategoryIndex:(unsigned long long)arg2 ;
-(id)groupPickerItemsForCategories;
-(long long)numberOfSectionsForCategoryAtIndex:(long long)arg1 ;
-(id)sectionControllerForSectionIndex:(long long)arg1 inCategoryAtIndex:(long long)arg2 ;
-(long long)indexForSection:(id)arg1 inCategoryAtIndex:(long long)arg2 ;
-(id)indexesForSectionsExcludingSectionsWithIdentifiers:(id)arg1 inCategoryAtIndex:(long long)arg2 ;
-(id)indexesForSectionsPresentIn:(id)arg1 butNotIn:(id)arg2 ;
-(id)currentCategoryIdentifier;
-(void)setSectionControllers:(NSMutableDictionary *)arg1 ;
@end

