/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSCountedSet, NSSet;

@interface WBSCacheRetainReleasePolicy : NSObject {

	/*^block*/id _purgeBlock;
	NSCountedSet* _entryRetainCounts;
	NSCountedSet* _negativeEntryRetainCounts;

}

@property (nonatomic,copy,readonly) NSSet * retainedKeyStrings; 
-(NSSet *)retainedKeyStrings;
-(void)releaseEntryWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)_releaseEntryForKeyString:(id)arg1 ;
-(id)initWithPurgeBlock:(/*^block*/id)arg1 ;
-(void)retainEntryWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)releaseEntryForKeyString:(id)arg1 ;
-(BOOL)isEntryRetainedForKeyString:(id)arg1 ;
-(void)retainEntryForKeyString:(id)arg1 ;
-(void)retainEntriesForKeyStrings:(id)arg1 ;
-(void)_retainEntryForKeyString:(id)arg1 ;
-(void)releaseEntriesForKeyStrings:(id)arg1 ;
@end

