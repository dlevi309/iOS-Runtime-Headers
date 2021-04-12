/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)summarizeMomentSections;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(void)dealloc;
-(void)reloadPhotoDefaultValues;
-(void)_reloadPhotoDefaultValuesAndNotify:(BOOL)arg1 ;
-(int)transitionForAnimationMovingForward:(BOOL)arg1 ;
-(BOOL)shouldPlayMusic;
-(void)setShouldPlayMusic:(BOOL)arg1 ;
-(void)setMusicCollection:(id)arg1 ;
-(id)musicCollection;
@end

