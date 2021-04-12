/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class CKRecord, HMDBackingStoreModelObject;

@interface HMDBackingStoreCacheFetchModelObjectResult : HMFObject {

	CKRecord* _record;
	HMDBackingStoreModelObject* _object;

}

@property (nonatomic,readonly) CKRecord * record;                                //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreModelObject * object;              //@synthesize object=_object - In the implementation block
-(HMDBackingStoreModelObject *)object;
-(CKRecord *)record;
-(id)initWithRecord:(id)arg1 data:(id)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4 ;
@end

