/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSMutableSet;

@interface MPVolumeHUDController : NSObject {

	NSMutableSet* _displays;
	NSMutableSet* _categories;
	BOOL _needsUpdate;

}

@property (nonatomic,readonly) id mainContext; 
+(id)sharedInstance;
-(id)init;
-(void)setNeedsUpdate;
-(id)mainContext;
-(void)_updateVisibility;
-(void)addVolumeDisplay:(id)arg1 ;
-(void)removeVolumeDisplay:(id)arg1 ;
-(void)registerView:(id)arg1 inContext:(id)arg2 ;
-(void)unregisterView:(id)arg1 inContext:(id)arg2 ;
-(void)_addCategory:(id)arg1 ;
-(void)_updateVisibilityForVolumeDisplays:(id)arg1 inWindowScene:(id)arg2 ;
@end

