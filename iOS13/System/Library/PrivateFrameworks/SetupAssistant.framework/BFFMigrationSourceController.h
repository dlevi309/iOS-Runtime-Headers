/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class BYMigrationSourceController;

@interface BFFMigrationSourceController : NSObject {

	/*^block*/id _dismissHandler;
	BYMigrationSourceController* _sourceController;

}

@property (nonatomic,retain) BYMigrationSourceController * sourceController;              //@synthesize sourceController=_sourceController - In the implementation block
@property (nonatomic,copy) id dismissHandler;                                             //@synthesize dismissHandler=_dismissHandler - In the implementation block
-(void)setSourceController:(BYMigrationSourceController *)arg1 ;
-(BYMigrationSourceController *)sourceController;
-(void)setDismissHandler:(id)arg1 ;
-(id)dismissHandler;
-(void)setFileTransferSession:(id)arg1 ;
-(id)initWithFileTransferSession:(id)arg1 ;
-(id)initialViewController;
@end

