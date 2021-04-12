/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSArray;

@interface PUPhotoEditAggregateSession : NSObject {

	BOOL _toggledOriginal;
	BOOL _pluginStarted;
	BOOL _pluginSaved;
	BOOL _shouldUseVideoKeys;
	BOOL __hasCropSuggestion;
	BOOL __hasPerspectiveCropSuggestion;
	BOOL __autoCropAdjusted;
	BOOL __autoCropReset;
	double _originalDuration;

}

@property (nonatomic,__weak,readonly) NSArray * _autoCropKeys; 
@property (assign,setter=_setHasCropSuggestion:,nonatomic) BOOL _hasCropSuggestion;                                    //@synthesize _hasCropSuggestion=__hasCropSuggestion - In the implementation block
@property (assign,setter=_setHasPerspectiveCropSuggestion:,nonatomic) BOOL _hasPerspectiveCropSuggestion;              //@synthesize _hasPerspectiveCropSuggestion=__hasPerspectiveCropSuggestion - In the implementation block
@property (assign,setter=_setAutoCropAdjusted:,nonatomic) BOOL _autoCropAdjusted;                                      //@synthesize _autoCropAdjusted=__autoCropAdjusted - In the implementation block
@property (assign,setter=_setAutoCropReset:,nonatomic) BOOL _autoCropReset;                                            //@synthesize _autoCropReset=__autoCropReset - In the implementation block
@property (assign,nonatomic) BOOL toggledOriginal;                                                                     //@synthesize toggledOriginal=_toggledOriginal - In the implementation block
@property (assign,nonatomic) BOOL pluginStarted;                                                                       //@synthesize pluginStarted=_pluginStarted - In the implementation block
@property (assign,nonatomic) BOOL pluginSaved;                                                                         //@synthesize pluginSaved=_pluginSaved - In the implementation block
@property (assign,nonatomic) BOOL shouldUseVideoKeys;                                                                  //@synthesize shouldUseVideoKeys=_shouldUseVideoKeys - In the implementation block
@property (assign,nonatomic) double originalDuration;                                                                  //@synthesize originalDuration=_originalDuration - In the implementation block
-(BOOL)_hasCropSuggestion;
-(void)notifyDidAdjustCrop;
-(void)notifyDidApplyAutoCrop;
-(void)notifyDidApplyPerspectiveAutoCrop;
-(void)notifyDidResetCrop;
-(CFStringRef)_keyForSessionEnd:(long long)arg1 ;
-(NSArray *)_autoCropKeys;
-(id)_sessionKeysWithEnd:(long long)arg1 ;
-(void)_recordKeys:(id)arg1 ;
-(id)finishSessionWithEnd:(long long)arg1 newCompositionController:(id)arg2 oldCompositionController:(id)arg3 ;
-(void)finishSessionWithEnd:(long long)arg1 ;
-(BOOL)toggledOriginal;
-(void)setToggledOriginal:(BOOL)arg1 ;
-(BOOL)pluginStarted;
-(void)setPluginStarted:(BOOL)arg1 ;
-(BOOL)pluginSaved;
-(void)setPluginSaved:(BOOL)arg1 ;
-(BOOL)shouldUseVideoKeys;
-(void)setShouldUseVideoKeys:(BOOL)arg1 ;
-(void)_setHasCropSuggestion:(BOOL)arg1 ;
-(BOOL)_hasPerspectiveCropSuggestion;
-(void)_setHasPerspectiveCropSuggestion:(BOOL)arg1 ;
-(BOOL)_autoCropAdjusted;
-(void)_setAutoCropAdjusted:(BOOL)arg1 ;
-(BOOL)_autoCropReset;
-(void)_setAutoCropReset:(BOOL)arg1 ;
-(void)setOriginalDuration:(double)arg1 ;
-(double)originalDuration;
@end

