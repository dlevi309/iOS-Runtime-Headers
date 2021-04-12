/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/


@class NSMutableDictionary;

@interface DOCUserInterfaceStateStore : NSObject {

	NSMutableDictionary* _uiStateMap;

}

@property (retain) NSMutableDictionary * uiStateMap;              //@synthesize uiStateMap=_uiStateMap - In the implementation block
+(id)sharedStore;
-(id)init;
-(id)_loadUserInterfaceStateFromDefaultsForConfiguration:(id)arg1 ;
-(id)mostRecentInterfaceStateForConfiguration:(id)arg1 ;
-(id)docUserDefaults;
-(void)_writeUserInterfaceStateToDefaultsForConfiguration:(id)arg1 ;
-(void)_writeMostRecentUserInterfaceStateToDefaultsForConfiguration:(id)arg1 ;
-(void)_pruneOldState;
-(id)_sortedInterfaceStateKeys;
-(id)interfaceStateForConfiguration:(id)arg1 ;
-(void)updateInterfaceState:(id)arg1 forConfiguration:(id)arg2 ;
-(void)purgeStateForConfiguration:(id)arg1 ;
-(NSMutableDictionary *)uiStateMap;
-(void)setUiStateMap:(NSMutableDictionary *)arg1 ;
@end

