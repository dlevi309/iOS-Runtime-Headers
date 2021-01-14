/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@class NSUserDefaults;

@interface GCControllerMetaDefaultsObserver : NSObject {

	NSUserDefaults* _metaDefaults;

}

@property (nonatomic,readonly) NSUserDefaults * metaDefaults;              //@synthesize metaDefaults=_metaDefaults - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(NSUserDefaults *)metaDefaults;
-(void)dealloc;
@end

