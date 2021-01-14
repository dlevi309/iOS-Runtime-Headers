/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXSettings.h>

@interface PUWorkaroundSettings : PXSettings {

	BOOL _addRemoveVideoLayer;
	BOOL _shouldWorkAround54502886;

}

@property (assign,nonatomic) BOOL addRemoveVideoLayer;                   //@synthesize addRemoveVideoLayer=_addRemoveVideoLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldWorkAround54502886;              //@synthesize shouldWorkAround54502886=_shouldWorkAround54502886 - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setAddRemoveVideoLayer:(BOOL)arg1 ;
-(BOOL)shouldWorkAround54502886;
-(BOOL)addRemoveVideoLayer;
-(void)setShouldWorkAround54502886:(BOOL)arg1 ;
@end

