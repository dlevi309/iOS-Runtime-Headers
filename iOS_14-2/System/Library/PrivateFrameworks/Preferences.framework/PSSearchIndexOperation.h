/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Foundation/NSOperation.h>

@protocol PSSearchIndexOperationDelegate;
@class PSSearchEntry;

@interface PSSearchIndexOperation : NSOperation {

	PSSearchEntry* _searchEntry;
	id<PSSearchIndexOperationDelegate> _delegate;

}

@property (nonatomic,readonly) PSSearchEntry * searchEntry;                  //@synthesize searchEntry=_searchEntry - In the implementation block
@property (__weak) id<PSSearchIndexOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_bundleForSearchEntry:(id)arg1 thirdPartyApp:(BOOL*)arg2 ;
+(id)_loadSearchEntriesFromPlistForEntry:(id)arg1 bundle:(id)arg2 ;
+(id)_loadThirdPartySearchEntriesForEntry:(id)arg1 bundle:(id)arg2 ;
+(id)topLevelManifestBundlePath;
+(id)possibleBundleRoots;
+(void)setPossibleBundleRoots:(id)arg1 ;
+(void)setTopLevelManifestBundlePath:(id)arg1 ;
-(id<PSSearchIndexOperationDelegate>)delegate;
-(void)setDelegate:(id<PSSearchIndexOperationDelegate>)arg1 ;
-(void)_cancel;
-(void)main;
-(id)initWithSearchEntry:(id)arg1 delegate:(id)arg2 ;
-(void)_finishedIndexingWithEntries:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)dealloc;
-(PSSearchEntry *)searchEntry;
@end

