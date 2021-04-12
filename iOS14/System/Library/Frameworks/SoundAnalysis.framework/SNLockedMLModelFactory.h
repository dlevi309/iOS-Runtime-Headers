/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class NSMapTable;

@interface SNLockedMLModelFactory : NSObject {

	NSMapTable* _vendedModels;
	mutex _lock;

}
-(id)init;
-(id)sharedLockedModelWithKey:(id)arg1 orCreateNewModelWithWithFunction:(/*^block*/id)arg2 ;
@end

