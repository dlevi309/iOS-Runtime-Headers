/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
*/

#import <WelcomeKit/WLDaemonConnection.h>

@protocol WLDataMigratorProtocol, WLDataMigrationDelegate;
@interface WLDataMigrationController : WLDaemonConnection {

	id<WLDataMigratorProtocol> _migrator;
	id<WLDataMigrationDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<WLDataMigrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WLDataMigrationDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)startMigrationUsingRetryPolicies:(BOOL)arg1 ;
@end

