/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI
*/

#import <Preferences/PSSpecifierDataSource.h>
#import <libobjc.A.dylib/NDOAppleCareFlowDelegate.h>

@class NDOManager, NSArray;

@interface NDOSpecifierDataSource : PSSpecifierDataSource <NDOAppleCareFlowDelegate> {

	BOOL _hasLoadedSpecifiers;
	NDOManager* _ndoManager;
	NSArray* _ndoSpecifiers;

}

@property (nonatomic,retain) NDOManager * ndoManager;              //@synthesize ndoManager=_ndoManager - In the implementation block
@property (nonatomic,retain) NSArray * ndoSpecifiers;              //@synthesize ndoSpecifiers=_ndoSpecifiers - In the implementation block
-(id)init;
-(void)loadSpecifiers;
-(id)warrantyDetailText:(id)arg1 ;
-(NDOManager *)ndoManager;
-(id)warrantySpecifiersFromWarranty:(id)arg1 ;
-(NSArray *)ndoSpecifiers;
-(void)setNdoSpecifiers:(NSArray *)arg1 ;
-(void)updateNDOSpecifiersWithPolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNdoManager:(NDOManager *)arg1 ;
-(void)outreachFinishedWithCompletion:(unsigned long long)arg1 ;
-(void)ndoAppleCareCoveragePressed:(id)arg1 ;
-(id)acController;
@end

