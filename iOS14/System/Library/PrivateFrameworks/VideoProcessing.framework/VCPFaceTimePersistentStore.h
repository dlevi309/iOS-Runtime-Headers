/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class NSPersistentContainer, NSManagedObjectContext;

@interface VCPFaceTimePersistentStore : NSObject {

	NSPersistentContainer* _persistentContainer;
	NSManagedObjectContext* _backgroundContext;

}
+(id)sharedInstance;
-(id)init;
-(id)fetchAllFaceTimeSessions;
-(BOOL)storeFaceTimeSession:(id)arg1 ;
@end

