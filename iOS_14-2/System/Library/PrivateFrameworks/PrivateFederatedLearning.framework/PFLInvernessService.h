/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/PFLNetworkProvider.h>

@class CKContainer, NSString;

@interface PFLInvernessService : NSObject <PFLNetworkProvider> {

	CKContainer* _container;

}

@property (nonatomic,retain) CKContainer * container;               //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_teamIdentifier;
-(id)init;
-(void)setContainer:(CKContainer *)arg1 ;
-(id)_appBundleIdentifier;
-(CKContainer *)container;
-(id)_taskConfigurationsFromPFLTasks:(id)arg1 ;
-(void)fetchTasks:(/*^block*/id)arg1 ;
-(void)fetchModelForTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)uploadDeviceResult:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

