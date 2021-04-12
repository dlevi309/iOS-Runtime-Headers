/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>

@class NSUUID, NSCloudKitMirroringRequestOptions;

@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest {

	NSUUID* _requestIdentifier;
	NSCloudKitMirroringRequestOptions* _options;
	/*^block*/id _requestCompletionBlock;

}

@property (nonatomic,readonly) NSUUID * requestIdentifier;                                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSCloudKitMirroringRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id requestCompletionBlock;                                //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSCloudKitMirroringRequestOptions *)options;
-(id)requestCompletionBlock;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(unsigned long long)requestType;
-(BOOL)validateForUseWithStore:(id)arg1 error:(id*)arg2 ;
-(NSUUID *)requestIdentifier;
@end

