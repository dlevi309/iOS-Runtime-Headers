/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithTitle:(id)arg1 ;
-(MBDeviceTransferProgress *)migrationProgress;
-(void)setConnectionInfo:(MBDeviceTransferConnectionInfo *)arg1 ;
-(MBDeviceTransferConnectionInfo *)connectionInfo;
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

