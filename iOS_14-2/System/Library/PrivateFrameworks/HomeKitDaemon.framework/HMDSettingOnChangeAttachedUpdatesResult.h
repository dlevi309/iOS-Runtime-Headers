/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMDSettingOnChangeAttachedUpdatesResult : HMFObject {

	NSArray* _settingsToUpdate;
	NSArray* _modelsToUpdate;
	/*^block*/id _onCommitCompletion;

}

@property (readonly) NSArray * settingsToUpdate;              //@synthesize settingsToUpdate=_settingsToUpdate - In the implementation block
@property (readonly) NSArray * modelsToUpdate;                //@synthesize modelsToUpdate=_modelsToUpdate - In the implementation block
@property (readonly) id onCommitCompletion;                   //@synthesize onCommitCompletion=_onCommitCompletion - In the implementation block
-(id)initWithSettingsToUpdate:(id)arg1 models:(id)arg2 onCommitCompletion:(/*^block*/id)arg3 ;
-(NSArray *)settingsToUpdate;
-(NSArray *)modelsToUpdate;
-(id)onCommitCompletion;
@end

