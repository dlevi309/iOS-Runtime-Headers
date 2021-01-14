/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/WFDatabaseObjectObserver.h>

@protocol OS_dispatch_queue, VCDatabaseProvider;
@class NSObject, WFDebouncer, NSOrderedSet;

@interface WFSiriWorkflowVocabularyUpdater : NSObject <WFDatabaseObjectObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	WFDebouncer* _debouncer;
	id<VCDatabaseProvider> _databaseProvider;
	NSOrderedSet* _speakableStrings;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) WFDebouncer * debouncer;                              //@synthesize debouncer=_debouncer - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,copy) NSOrderedSet * speakableStrings;                          //@synthesize speakableStrings=_speakableStrings - In the implementation block
-(WFDebouncer *)debouncer;
-(id<VCDatabaseProvider>)databaseProvider;
-(void)startIfPossible;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(void)queue_startIfPossible;
-(id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2 ;
-(void)assistantPreferencesDidChange;
-(void)applicationWasRegistered:(id)arg1 ;
-(void)updateIfPossible;
-(void)queue_updateIfNeeded;
-(NSOrderedSet *)speakableStrings;
-(void)setSpeakableStrings:(NSOrderedSet *)arg1 ;
@end

