/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@protocol EFScheduler;
@class MFMailMessageLibrary, EDMessageChangeManager, EDLocalActionPersistence, MailAccount, NSMutableArray, NSString;

@interface MFLocalActionReplayHandler : NSObject <EFLoggable, EFPubliclyDescribable> {

	BOOL _replayingActions;
	BOOL _needToCheckForNewActions;
	MFMailMessageLibrary* _library;
	EDMessageChangeManager* _messageChangeManager;
	EDLocalActionPersistence* _localActionPersistence;
	MailAccount* _account;
	NSMutableArray* _actionsToReplay;
	id<EFScheduler> _replayScheduler;

}

@property (nonatomic,retain) MFMailMessageLibrary * library;                                 //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) EDMessageChangeManager * messageChangeManager;                  //@synthesize messageChangeManager=_messageChangeManager - In the implementation block
@property (nonatomic,retain) EDLocalActionPersistence * localActionPersistence;              //@synthesize localActionPersistence=_localActionPersistence - In the implementation block
@property (assign,nonatomic,__weak) MailAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionsToReplay;                               //@synthesize actionsToReplay=_actionsToReplay - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> replayScheduler;                              //@synthesize replayScheduler=_replayScheduler - In the implementation block
@property (assign,nonatomic) BOOL needToCheckForNewActions;                                  //@synthesize needToCheckForNewActions=_needToCheckForNewActions - In the implementation block
@property (assign) BOOL replayingActions;                                                    //@synthesize replayingActions=_replayingActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(id)log;
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
-(MFMailMessageLibrary *)library;
-(void)connectionEstablished;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(NSString *)ef_publicDescription;
-(EDMessageChangeManager *)messageChangeManager;
-(id)initWithLibrary:(id)arg1 account:(id)arg2 ;
-(void)newActionsAdded;
-(void)addNewAction:(id)arg1 ;
-(EDLocalActionPersistence *)localActionPersistence;
-(NSMutableArray *)actionsToReplay;
-(BOOL)replayingActions;
-(void)setNeedToCheckForNewActions:(BOOL)arg1 ;
-(void)_replayAllActions;
-(void)setReplayingActions:(BOOL)arg1 ;
-(id<EFScheduler>)replayScheduler;
-(void)_checkForNewActions;
-(BOOL)needToCheckForNewActions;
-(void)setMessageChangeManager:(EDMessageChangeManager *)arg1 ;
-(void)setLocalActionPersistence:(EDLocalActionPersistence *)arg1 ;
-(void)setActionsToReplay:(NSMutableArray *)arg1 ;
@end

