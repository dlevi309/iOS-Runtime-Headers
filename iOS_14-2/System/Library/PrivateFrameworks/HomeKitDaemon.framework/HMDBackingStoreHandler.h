/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, HMDBackingStore, NSString;

@interface HMDBackingStoreHandler : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging> {

	NSUUID* _identifier;
	HMDBackingStore* _backingStore;

}

@property (copy,readonly) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDBackingStore * backingStore;                //@synthesize backingStore=_backingStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)privateDescription;
-(HMDBackingStore *)backingStore;
-(id)logIdentifier;
-(id)initWithIdentifier:(id)arg1 backingStore:(id)arg2 ;
-(id)attributeDescriptions;
-(NSUUID *)identifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)runTransactionWithModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)backingStoreObjectsForVersion:(long long)arg1 ;
-(void)runTransactionWithModels:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

