/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class _CDCloudFamilyDataCollectionTask, NSSet;

@interface _PSFamilyFeatureExtractor : NSObject {

	_CDCloudFamilyDataCollectionTask* _task;
	NSSet* _featureSet;

}

@property (nonatomic,retain) _CDCloudFamilyDataCollectionTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) NSSet * featureSet;                                 //@synthesize featureSet=_featureSet - In the implementation block
-(_CDCloudFamilyDataCollectionTask *)task;
-(id)init;
-(id)featureInputsForContacts:(id)arg1 ;
-(void)setTask:(_CDCloudFamilyDataCollectionTask *)arg1 ;
-(NSSet *)featureSet;
-(id)initWith:(id)arg1 featureSet:(id)arg2 ;
-(id)featureInputForContact:(id)arg1 ;
@end

