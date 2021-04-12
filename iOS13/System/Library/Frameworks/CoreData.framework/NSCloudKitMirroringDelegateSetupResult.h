/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class CKContainer, CKDatabase;

@interface NSCloudKitMirroringDelegateSetupResult : NSCloudKitMirroringResult {

	CKContainer* _container;
	CKDatabase* _database;

}

@property (nonatomic,readonly) CKContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                //@synthesize database=_database - In the implementation block
-(void)dealloc;
-(CKContainer *)container;
-(CKDatabase *)database;
-(id)initWithRequest:(id)arg1 success:(BOOL)arg2 error:(id)arg3 container:(id)arg4 database:(id)arg5 ;
@end

