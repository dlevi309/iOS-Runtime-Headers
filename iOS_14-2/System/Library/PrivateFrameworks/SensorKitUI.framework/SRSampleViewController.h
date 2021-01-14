/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSString, SRAuthorizationGroup;

@interface SRSampleViewController : UITableViewController {

	NSArray* _sampleDataEntries;
	NSString* _note;
	SRAuthorizationGroup* _authGroup;

}

@property (nonatomic,retain) NSArray * sampleDataEntries;                   //@synthesize sampleDataEntries=_sampleDataEntries - In the implementation block
@property (nonatomic,retain) NSString * note;                               //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) SRAuthorizationGroup * authGroup;              //@synthesize authGroup=_authGroup - In the implementation block
+(id)sampleViewControllerForAuthGroup:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)setNote:(NSString *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSString *)note;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)dealloc;
-(void)setSampleDataEntries:(NSArray *)arg1 ;
-(void)setAuthGroup:(SRAuthorizationGroup *)arg1 ;
-(NSArray *)sampleDataEntries;
-(id)prepareEndRowWithText:(id)arg1 detailText:(id)arg2 ;
-(id)sortedKeysForDictionary:(id)arg1 ;
-(id)prepareExtendedRowWithText:(id)arg1 ;
-(SRAuthorizationGroup *)authGroup;
@end

