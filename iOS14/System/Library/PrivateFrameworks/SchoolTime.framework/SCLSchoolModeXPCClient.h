/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/SCLSchoolModeXPCClient.h>

@protocol SCLSchoolModeXPCClient <NSObject>
@required
-(oneway void)applyServerSettings:(id)arg1;
-(oneway void)didChangeUnlockHistory;

@end


@protocol SCLSchoolModeXPCClientDelegate;
@class SCLSchoolModeServerSettings, NSXPCConnection, SCLSchoolModeConfiguration, SCLState, SCLScheduleSettings, NSString;

@interface SCLSchoolModeXPCClient : NSObject <SCLSchoolModeXPCClient> {

	os_unfair_lock_s _lock;
	SCLSchoolModeServerSettings* _serverSettings;
	id<SCLSchoolModeXPCClientDelegate> _delegate;
	NSXPCConnection* _connection;
	SCLSchoolModeConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<SCLSchoolModeXPCClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) SCLSchoolModeConfiguration * configuration;                      //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) SCLState * state; 
@property (nonatomic,readonly) SCLScheduleSettings * scheduleSettings; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SCLSchoolModeXPCClientDelegate>)delegate;
-(void)dumpState;
-(void)setDelegate:(id<SCLSchoolModeXPCClientDelegate>)arg1 ;
-(SCLSchoolModeConfiguration *)configuration;
-(NSXPCConnection *)connection;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(SCLState *)state;
-(void)invalidate;
-(void)_reconnect;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)isLoaded;
-(void)resume;
-(void)setConfiguration:(SCLSchoolModeConfiguration *)arg1 ;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(SCLScheduleSettings *)scheduleSettings;
-(oneway void)applyServerSettings:(id)arg1 ;
-(void)setActive:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchRecentUnlockHistoryItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)addUnlockHistoryItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteHistoryWithCompletion:(/*^block*/id)arg1 ;
-(void)noteSignificantUserInteraction;
-(void)triggerRemoteSync;
-(oneway void)didChangeUnlockHistory;
-(void)applyScheduleSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

