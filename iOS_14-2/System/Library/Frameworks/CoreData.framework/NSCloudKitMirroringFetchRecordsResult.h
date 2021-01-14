/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsResult : NSCloudKitMirroringResult {

	NSArray* _updatedObjectIDs;
	NSDictionary* _failedObjectIDsToError;

}

@property (nonatomic,readonly) NSArray * updatedObjectIDs;                         //@synthesize updatedObjectIDs=_updatedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * failedObjectIDsToError;              //@synthesize failedObjectIDsToError=_failedObjectIDsToError - In the implementation block
-(NSDictionary *)failedObjectIDsToError;
-(id)initWithRequest:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 updatedObjectIDs:(id)arg4 failedObjectIDToError:(id)arg5 error:(id)arg6 ;
-(NSArray *)updatedObjectIDs;
-(void)dealloc;
@end

