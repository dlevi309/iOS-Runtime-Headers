/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EDInteractionLogger, EDDonationController, EDInteractionEventLogUploader, EDInteractionEventLogFile;

@interface EDCategorySubsystem : NSObject {

	EDInteractionLogger* _interactionLogger;
	EDDonationController* _donationController;
	EDInteractionEventLogUploader* _logUploader;
	EDInteractionEventLogFile* _logFile;

}

@property (nonatomic,retain) EDInteractionEventLogUploader * logUploader;              //@synthesize logUploader=_logUploader - In the implementation block
@property (nonatomic,retain) EDInteractionEventLogFile * logFile;                      //@synthesize logFile=_logFile - In the implementation block
@property (nonatomic,readonly) EDInteractionLogger * interactionLogger;                //@synthesize interactionLogger=_interactionLogger - In the implementation block
@property (nonatomic,readonly) EDDonationController * donationController;              //@synthesize donationController=_donationController - In the implementation block
-(EDInteractionLogger *)interactionLogger;
-(EDDonationController *)donationController;
-(void)setLogFile:(EDInteractionEventLogFile *)arg1 ;
-(EDInteractionEventLogFile *)logFile;
-(void)_schedulePETSubmissionActivityForLog:(id)arg1 ;
-(id)initWithPersistence:(id)arg1 userProfileProvider:(id)arg2 vipManager:(id)arg3 sourceApplicationBundleIdentifier:(id)arg4 ;
-(EDInteractionEventLogUploader *)logUploader;
-(void)setLogUploader:(EDInteractionEventLogUploader *)arg1 ;
@end

