/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreChangeObject.h>

@class HMDBackingStoreModelObject, NSSet, HMFMessage, NSString;

@interface HMDBackingStoreTransactionItem : HMFObject <HMDBackingStoreChangeObject> {

	HMDBackingStoreModelObject* _change;
	NSSet* _dependentUUIDs;
	HMFMessage* _message;

}

@property (nonatomic,readonly) HMFMessage * message;                             //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMDBackingStoreModelObject * change;              //@synthesize change=_change - In the implementation block
@property (nonatomic,readonly) NSSet * dependentUUIDs;                           //@synthesize dependentUUIDs=_dependentUUIDs - In the implementation block
-(HMFMessage *)message;
-(HMDBackingStoreModelObject *)change;
-(NSSet *)dependentUUIDs;
-(id)initWithChange:(id)arg1 message:(id)arg2 ;
@end

