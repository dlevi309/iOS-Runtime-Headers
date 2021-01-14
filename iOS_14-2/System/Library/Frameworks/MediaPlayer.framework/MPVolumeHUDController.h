/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSHashTable, NSMutableSet;

@interface MPVolumeHUDController : NSObject {

	NSHashTable* _scenes;
	NSMutableSet* _displays;
	NSMutableSet* _categories;
	BOOL _needsUpdate;

}

@property (nonatomic,readonly) id mainContext; 
+(id)sharedInstance;
-(void)setNeedsUpdate;
-(id)init;
-(void)registerView:(id)arg1 inContext:(id)arg2 ;
-(void)_addCategory:(id)arg1 ;
-(void)removeVolumeDisplay:(id)arg1 ;
-(void)addVolumeDisplay:(id)arg1 ;
-(void)_updateVisibilityForVolumeDisplays:(id)arg1 inWindowScene:(id)arg2 ;
-(id)mainContext;
-(void)unregisterView:(id)arg1 inContext:(id)arg2 ;
-(void)_updateVisibility;
@end

