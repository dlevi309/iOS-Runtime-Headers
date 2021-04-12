/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

