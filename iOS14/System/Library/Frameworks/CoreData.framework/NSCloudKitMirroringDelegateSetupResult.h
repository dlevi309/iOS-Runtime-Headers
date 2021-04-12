/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRequest:(id)arg1 success:(BOOL)arg2 error:(id)arg3 container:(id)arg4 database:(id)arg5 ;
-(CKDatabase *)database;
-(CKContainer *)container;
-(void)dealloc;
@end

