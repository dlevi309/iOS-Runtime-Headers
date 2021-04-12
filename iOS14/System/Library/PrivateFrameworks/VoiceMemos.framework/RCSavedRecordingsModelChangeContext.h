/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@class NSArray;

@interface RCSavedRecordingsModelChangeContext : NSObject {

	NSArray* _insertedObjects;
	NSArray* _updatedObjects;
	NSArray* _deletedObjects;

}

@property (nonatomic,copy,readonly) NSArray * insertedObjects;              //@synthesize insertedObjects=_insertedObjects - In the implementation block
@property (nonatomic,copy,readonly) NSArray * updatedObjects;               //@synthesize updatedObjects=_updatedObjects - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedObjects;               //@synthesize deletedObjects=_deletedObjects - In the implementation block
-(NSArray *)updatedObjects;
-(NSArray *)insertedObjects;
-(id)_recordingURIsInArray:(id)arg1 includeTemporaryURIs:(BOOL)arg2 ;
-(id)initWithStateFromManagedObjectContext:(id)arg1 ;
-(NSArray *)deletedObjects;
-(id)insertedRecordingURIsIncludingTemporaryURIs:(BOOL)arg1 ;
-(id)updatedRecordingURIsIncludingTemporaryURIs:(BOOL)arg1 ;
-(id)deletedRecordingURIsIncludingTemporaryURIs:(BOOL)arg1 ;
@end

