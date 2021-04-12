/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
*/

#import <DataAccessExpress/DADisableableObject.h>
#import <DALDAP/DATask.h>

@protocol OS_ldap_connection;
@class DATaskManager, NSObject, NSDate, NSString;

@interface LDAPTask : DADisableableObject <DATask> {

	BOOL _isFinished;
	DATaskManager* _taskManager;
	id _delegate;
	NSObject*<OS_ldap_connection> _ldConnection;
	NSDate* _dateConnectionWentOut;

}

@property (assign,nonatomic,__weak) DATaskManager * taskManager;                      //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_ldap_connection> ldConnection;              //@synthesize ldConnection=_ldConnection - In the implementation block
@property (nonatomic,retain) NSDate * dateConnectionWentOut;                          //@synthesize dateConnectionWentOut=_dateConnectionWentOut - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                         //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,readonly) int numDownloadedElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isFinished;
-(void)finishWithError:(id)arg1 ;
-(void)disable;
-(void)setIsFinished:(BOOL)arg1 ;
-(DATaskManager *)taskManager;
-(void)performTask;
-(void)initializeConnection;
-(void)_performQuery;
-(void)setTaskManager:(DATaskManager *)arg1 ;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(BOOL)shouldHoldPowerAssertion;
-(int)numDownloadedElements;
-(void)reportStatusWithError:(id)arg1 ;
-(long long)taskStatusForError:(id)arg1 ;
-(void)setDateConnectionWentOut:(NSDate *)arg1 ;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(void)setLdConnection:(NSObject*<OS_ldap_connection>)arg1 ;
-(NSObject*<OS_ldap_connection>)ldConnection;
-(NSDate *)dateConnectionWentOut;
@end

