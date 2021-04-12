/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSCountedSet, NSSet;

@interface WBSCacheRetainReleasePolicy : NSObject {

	/*^block*/id _purgeBlock;
	NSCountedSet* _entryRetainCounts;
	NSCountedSet* _negativeEntryRetainCounts;

}

@property (nonatomic,copy,readonly) NSSet * retainedKeyStrings; 
-(void)_retainEntryForKeyString:(id)arg1 ;
-(void)_releaseEntryForKeyString:(id)arg1 ;
-(id)initWithPurgeBlock:(/*^block*/id)arg1 ;
-(void)retainEntryForKeyString:(id)arg1 ;
-(void)retainEntriesForKeyStrings:(id)arg1 ;
-(void)retainEntryWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)releaseEntryForKeyString:(id)arg1 ;
-(void)releaseEntriesForKeyStrings:(id)arg1 ;
-(void)releaseEntryWithKeyStringProvider:(/*^block*/id)arg1 ;
-(BOOL)isEntryRetainedForKeyString:(id)arg1 ;
-(NSSet *)retainedKeyStrings;
@end

