/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@protocol EFScheduler;
@class MFMailMessageLibrary, MailAccount, NSMutableArray, NSString;

@interface MFLocalActionReplayHandler : NSObject <EFLoggable, EFPubliclyDescribable> {

	BOOL _replayingActions;
	BOOL _needToCheckForNewActions;
	MFMailMessageLibrary* _library;
	MailAccount* _account;
	NSMutableArray* _actionsToReplay;
	id<EFScheduler> _replayScheduler;

}

@property (nonatomic,retain) MFMailMessageLibrary * library;                      //@synthesize library=_library - In the implementation block
@property (assign,nonatomic,__weak) MailAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionsToReplay;                    //@synthesize actionsToReplay=_actionsToReplay - In the implementation block
@property (nonatomic,readonly) id<EFScheduler> replayScheduler;                   //@synthesize replayScheduler=_replayScheduler - In the implementation block
@property (assign,nonatomic) BOOL needToCheckForNewActions;                       //@synthesize needToCheckForNewActions=_needToCheckForNewActions - In the implementation block
@property (assign) BOOL replayingActions;                                         //@synthesize replayingActions=_replayingActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(id)log;
-(MFMailMessageLibrary *)library;
-(MailAccount *)account;
-(void)connectionEstablished;
-(void)setAccount:(MailAccount *)arg1 ;
-(NSString *)ef_publicDescription;
-(void)newActionsAdded;
-(NSMutableArray *)actionsToReplay;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(id<EFScheduler>)replayScheduler;
-(void)_checkForNewActions;
-(void)setActionsToReplay:(NSMutableArray *)arg1 ;
-(void)addNewAction:(id)arg1 ;
-(BOOL)needToCheckForNewActions;
-(id)initWithLibrary:(id)arg1 account:(id)arg2 ;
-(BOOL)replayingActions;
-(void)setNeedToCheckForNewActions:(BOOL)arg1 ;
-(void)_replayAllActions;
-(void)setReplayingActions:(BOOL)arg1 ;
@end

