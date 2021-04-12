/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VTEventTrackerManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2 ;
-(id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 sortedByDateWithResourceKey:(id)arg3 error:(id*)arg4 ;
-(id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id*)arg4 ;
-(void)voiceTriggerEvent:(/*^block*/id)arg1 ;
-(id)_dictionaryToJson:(id)arg1 ;
@end

