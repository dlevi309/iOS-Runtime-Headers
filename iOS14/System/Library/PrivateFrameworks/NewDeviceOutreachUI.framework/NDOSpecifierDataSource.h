/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <Preferences/PSSpecifierDataSource.h>
#import <libobjc.A.dylib/NDOAppleCareFlowDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NDOManager, NSArray;

@interface NDOSpecifierDataSource : PSSpecifierDataSource <NDOAppleCareFlowDelegate> {

	NSObject*<OS_dispatch_queue> _policyLookupQueue;
	NDOManager* _ndoManager;
	NSArray* _ndoSpecifiers;

}

@property (nonatomic,retain) NDOManager * ndoManager;              //@synthesize ndoManager=_ndoManager - In the implementation block
@property (nonatomic,retain) NSArray * ndoSpecifiers;              //@synthesize ndoSpecifiers=_ndoSpecifiers - In the implementation block
-(id)init;
-(void)loadSpecifiers;
-(void)outreachFinishedWithCompletion:(unsigned long long)arg1 ;
-(NSArray *)ndoSpecifiers;
-(void)updateNDOSpecifiersWithPolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNdoManager:(NDOManager *)arg1 ;
-(NDOManager *)ndoManager;
-(id)warrantySpecifiersFromWarranty:(id)arg1 ;
-(void)setNdoSpecifiers:(NSArray *)arg1 ;
-(id)warrantyDetailText:(id)arg1 ;
-(void)ndoAppleCareCoveragePressed:(id)arg1 ;
-(id)acController;
@end

