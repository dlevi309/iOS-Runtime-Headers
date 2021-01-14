/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <UIKitCore/UIViewController.h>

@protocol BPSWatchMigrationControllerDelegate;
@class BPSRemoteWatchView, BPSMultipleWatchMigrationView, NSString, NSArray;

@interface BPSWatchMigrationController : UIViewController {

	BOOL _iTunes;
	id<BPSWatchMigrationControllerDelegate> _migrationDelegate;
	BPSRemoteWatchView* _watchView;
	BPSMultipleWatchMigrationView* _multipleWatchView;
	NSString* _sourceDeviceName;
	NSArray* _migratableDevices;

}

@property (nonatomic,retain) BPSRemoteWatchView * watchView;                                                //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) BPSMultipleWatchMigrationView * multipleWatchView;                             //@synthesize multipleWatchView=_multipleWatchView - In the implementation block
@property (nonatomic,retain) NSString * sourceDeviceName;                                                   //@synthesize sourceDeviceName=_sourceDeviceName - In the implementation block
@property (nonatomic,retain) NSArray * migratableDevices;                                                   //@synthesize migratableDevices=_migratableDevices - In the implementation block
@property (assign,nonatomic) BOOL iTunes;                                                                   //@synthesize iTunes=_iTunes - In the implementation block
@property (assign,nonatomic,__weak) id<BPSWatchMigrationControllerDelegate> migrationDelegate;              //@synthesize migrationDelegate=_migrationDelegate - In the implementation block
-(BOOL)iTunes;
-(id)initWithSnapshot:(id)arg1 ;
-(void)loadView;
-(NSArray *)migratableDevices;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BPSRemoteWatchView *)watchView;
-(void)setWatchView:(BPSRemoteWatchView *)arg1 ;
-(id)initWithSourceDeviceName:(id)arg1 ;
-(void)_notifyDelegateShouldMigrateWithData:(id)arg1 ;
-(void)_saveMigrationPreference:(BOOL)arg1 ;
-(void)setMigratableDevices:(NSArray *)arg1 ;
-(id<BPSWatchMigrationControllerDelegate>)migrationDelegate;
-(BOOL)shouldBeDisplayedGivenMigrationData:(id)arg1 ;
-(void)setMigrationDelegate:(id<BPSWatchMigrationControllerDelegate>)arg1 ;
-(BPSMultipleWatchMigrationView *)multipleWatchView;
-(void)setMultipleWatchView:(BPSMultipleWatchMigrationView *)arg1 ;
-(NSString *)sourceDeviceName;
-(void)setSourceDeviceName:(NSString *)arg1 ;
-(void)setITunes:(BOOL)arg1 ;
@end

