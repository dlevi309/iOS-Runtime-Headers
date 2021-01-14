/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>

@class NSUUID, NSCloudKitMirroringRequestOptions, CKSchedulerActivity;

@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest {

	NSUUID* _requestIdentifier;
	NSCloudKitMirroringRequestOptions* _options;
	/*^block*/id _requestCompletionBlock;
	CKSchedulerActivity* _activity;

}

@property (nonatomic,readonly) CKSchedulerActivity * activity;                                //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) NSUUID * requestIdentifier;                                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSCloudKitMirroringRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id requestCompletionBlock;                                //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
+(id)allRequestClasses;
-(NSUUID *)requestIdentifier;
-(unsigned long long)requestType;
-(CKSchedulerActivity *)activity;
-(id)initWithActivity:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSCloudKitMirroringRequestOptions *)options;
-(id)description;
-(id)requestCompletionBlock;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)validateForUseWithStore:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

