/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSMutableDictionary, NTKTaskScheduler;

@interface NTKPhotoAnalysisFileCache : NSObject {

	NSMutableDictionary* _cache;
	int _sequenceNumber;
	BOOL _cacheDirty;
	NTKTaskScheduler* _taskScheduler;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_load;
-(BOOL)_save;
-(id)photoAnalysisForIdentifier:(id)arg1 ;
-(void)setPhotoAnalysis:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_dirtyCache;
@end

