/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol OS_dispatch_semaphore;
@class NSArray, ACAccount, NSObject, NSString;

@interface ICDeviceListRequest : NSObject {

	BOOL _didGetICloudDeviceList;
	NSArray* _devices;
	ACAccount* _account;
	NSObject*<OS_dispatch_semaphore> _workSemaphore;
	NSString* _name;
	NSString* _model;
	NSString* _modelDisplayName;
	NSString* _softwareVersion;

}

@property (nonatomic,retain) ACAccount * account;                               //@synthesize account=_account - In the implementation block
@property (retain) NSArray * devices;                                           //@synthesize devices=_devices - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> workSemaphore;              //@synthesize workSemaphore=_workSemaphore - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * modelDisplayName;                         //@synthesize modelDisplayName=_modelDisplayName - In the implementation block
@property (nonatomic,copy) NSString * softwareVersion;                          //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (assign) BOOL didGetICloudDeviceList;                                 //@synthesize didGetICloudDeviceList=_didGetICloudDeviceList - In the implementation block
+(id)combineICloudDevices:(id)arg1 withCloudKitDevices:(id)arg2 ;
+(id)filteredDevices:(id)arg1 ;
+(id)setOfDeviceNamesFromDevices:(id)arg1 ;
-(ACAccount *)account;
-(NSString *)model;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)init;
-(NSString *)softwareVersion;
-(NSString *)name;
-(void)setModel:(NSString *)arg1 ;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(NSString *)modelDisplayName;
-(void)setName:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(BOOL)didGetICloudDeviceList;
-(void)fetchWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)workSemaphore;
-(void)fetchCloudKitDevicesWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setDidGetICloudDeviceList:(BOOL)arg1 ;
-(void)fetchICloudDevicesWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)anyDeviceNeedsUpgrade;
-(BOOL)anyDeviceNotUpgradable;
-(BOOL)anyOSXDeviceNotUpgraded;
-(BOOL)waitForFetchWithTimeout:(double)arg1 ;
-(void)setWorkSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setModelDisplayName:(NSString *)arg1 ;
@end

