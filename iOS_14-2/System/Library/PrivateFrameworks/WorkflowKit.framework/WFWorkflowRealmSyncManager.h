/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@protocol WFUserInterfaceHost;
@class WFDatabase;

@interface WFWorkflowRealmSyncManager : NSObject <WFApplicationStateObserver> {

	id<WFUserInterfaceHost> _userInterface;
	WFDatabase* _database;

}

@property (nonatomic,readonly) WFDatabase * database;                            //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) id<WFUserInterfaceHost> userInterface;              //@synthesize userInterface=_userInterface - In the implementation block
+(id)defaultManager;
+(void)setDefaultManager:(id)arg1 ;
-(id<WFUserInterfaceHost>)userInterface;
-(void)setUserInterface:(id<WFUserInterfaceHost>)arg1 ;
-(WFDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(void)dealloc;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)presentResumeSyncConfirmationAlertWithContinueSyncingBlock:(/*^block*/id)arg1 cancelSyncingBlock:(/*^block*/id)arg2 ;
-(void)handleZoneWasPurgedError;
@end

