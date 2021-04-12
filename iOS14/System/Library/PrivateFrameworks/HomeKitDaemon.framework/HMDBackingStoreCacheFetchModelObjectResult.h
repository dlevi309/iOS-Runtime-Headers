/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKRecord *)record;
-(HMDBackingStoreModelObject *)object;
-(id)initWithRecord:(id)arg1 data:(id)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4 ;
@end

