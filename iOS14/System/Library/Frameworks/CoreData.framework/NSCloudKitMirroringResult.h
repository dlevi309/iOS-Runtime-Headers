/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreResult.h>

@class NSError, NSCloudKitMirroringRequest;

@interface NSCloudKitMirroringResult : NSPersistentStoreResult {

	BOOL _success;
	BOOL _madeChanges;
	NSError* _error;
	NSCloudKitMirroringRequest* _request;

}

@property (nonatomic,readonly) NSCloudKitMirroringRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL success;                                      //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL madeChanges;                                  //@synthesize madeChanges=_madeChanges - In the implementation block
@property (nonatomic,readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
-(BOOL)success;
-(id)initWithRequest:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 error:(id)arg4 ;
-(NSCloudKitMirroringRequest *)request;
-(NSError *)error;
-(id)description;
-(BOOL)madeChanges;
-(void)dealloc;
@end

