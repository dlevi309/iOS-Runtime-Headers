/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/BFFTimeRemainingController.h>

@class NSString, NSDateComponentsFormatter, MBDeviceTransferConnectionInfo, MBDeviceTransferProgress;

@interface BFFMigrationTimeRemainingController : BFFTimeRemainingController {

	NSString* _internalProgressText;
	NSDateComponentsFormatter* _elapsedDurationFormatter;
	MBDeviceTransferConnectionInfo* _connectionInfo;
	MBDeviceTransferProgress* _migrationProgress;

}

@property (nonatomic,retain) NSDateComponentsFormatter * elapsedDurationFormatter;              //@synthesize elapsedDurationFormatter=_elapsedDurationFormatter - In the implementation block
@property (nonatomic,retain) MBDeviceTransferConnectionInfo * connectionInfo;                   //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (nonatomic,retain) MBDeviceTransferProgress * migrationProgress;                      //@synthesize migrationProgress=_migrationProgress - In the implementation block
@property (retain) NSString * internalProgressText;                                             //@synthesize internalProgressText=_internalProgressText - In the implementation block
-(void)setConnectionInfo:(MBDeviceTransferConnectionInfo *)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(MBDeviceTransferConnectionInfo *)connectionInfo;
-(MBDeviceTransferProgress *)migrationProgress;
-(id)timeRemainingString:(double)arg1 ;
-(void)updateProgressSubtext;
-(void)setMigrationProgress:(MBDeviceTransferProgress *)arg1 ;
-(void)setInternalProgressText:(NSString *)arg1 ;
-(NSDateComponentsFormatter *)elapsedDurationFormatter;
-(NSString *)internalProgressText;
-(void)setDeviceConnectionInformation:(id)arg1 ;
-(void)setDeviceTransferProgress:(id)arg1 ;
-(void)setElapsedDurationFormatter:(NSDateComponentsFormatter *)arg1 ;
@end

