/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/WFDatabaseResultObserver.h>

@protocol OS_dispatch_queue, VCDatabaseProvider;
@class NSObject, NSUserDefaults, WFDatabaseResult;

@interface VCShareSheetWorkflowStatusUpdater : NSObject <WFDatabaseResultObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _userDefaults;
	id<VCDatabaseProvider> _databaseProvider;
	WFDatabaseResult* _shareSheetWorkflows;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                        //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,retain) WFDatabaseResult * shareSheetWorkflows;                 //@synthesize shareSheetWorkflows=_shareSheetWorkflows - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUserDefaults *)userDefaults;
-(id)initWithDatabase:(id)arg1 ;
-(void)updateWithResult:(id)arg1 ;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 ;
-(id)initWithUserDefaults:(id)arg1 databaseProvider:(id)arg2 eventHandler:(id)arg3 ;
-(void)startIfPossible;
-(void)queue_startIfPossible;
-(WFDatabaseResult *)shareSheetWorkflows;
-(void)setShareSheetWorkflows:(WFDatabaseResult *)arg1 ;
@end

