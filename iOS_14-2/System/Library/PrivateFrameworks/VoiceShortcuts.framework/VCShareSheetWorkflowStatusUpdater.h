/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/WFDatabaseObjectObserver.h>

@protocol OS_dispatch_queue, VCDatabaseProvider;
@class NSObject, NSUserDefaults;

@interface VCShareSheetWorkflowStatusUpdater : NSObject <WFDatabaseObjectObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _userDefaults;
	id<VCDatabaseProvider> _databaseProvider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                        //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
-(void)queue_setShareSheetShortcutsPresent:(BOOL)arg1 ;
-(id<VCDatabaseProvider>)databaseProvider;
-(NSUserDefaults *)userDefaults;
-(void)startIfPossible;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(void)queue_updateFromDatabase:(id)arg1 ;
-(void)queue_startIfPossible;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 ;
@end

