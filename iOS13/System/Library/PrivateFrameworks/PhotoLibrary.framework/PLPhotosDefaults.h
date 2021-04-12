/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject {

	BOOL _shouldPlayMusic;
	BOOL _summarizeMomentSections;
	int _transition;
	MPMediaItemCollection* _musicCollection;

}
+(id)sharedInstance;
+(int)randomTransition;
-(id)init;
-(void)dealloc;
-(int)transition;
-(void)setTransition:(int)arg1 ;
-(void)reloadPhotoDefaultValues;
-(void)_reloadPhotoDefaultValuesAndNotify:(BOOL)arg1 ;
-(BOOL)summarizeMomentSections;
-(int)transitionForAnimationMovingForward:(BOOL)arg1 ;
-(BOOL)shouldPlayMusic;
-(void)setShouldPlayMusic:(BOOL)arg1 ;
-(void)setMusicCollection:(id)arg1 ;
-(id)musicCollection;
@end

