/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_save;
-(id)init;
-(BOOL)_load;
-(void)dealloc;
-(id)photoAnalysisForIdentifier:(id)arg1 ;
-(void)setPhotoAnalysis:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_dirtyCache;
@end

