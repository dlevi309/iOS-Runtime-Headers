/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
*/


#import <NewsstandKit/NewsstandKit-Structs.h>
@class NSArray, NKIssue, NSMapTable, NSURL, NSFileManager;

@interface NKLibrary : NSObject {

	NSArray* _issues;
	NKIssue* _currentlyReadingIssue;
	NSMapTable* _issuesByName;
	NSMapTable* _issuesByDirectory;
	NSURL* _contentURL;
	NSFileManager* _fileManager;
	NSURL* _appSupportURL;
	NSURL* _libraryURL;
	BOOL _inited;
	int _needsSaving;
	int _savePending;
	NSArray* _assetsFromLaunch;

}

@property (readonly) NSArray * issues; 
@property (readonly) NSArray * downloadingAssets; 
@property (retain) NKIssue * currentlyReadingIssue; 
+(id)sharedLibrary;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)_isNewsstandApp;
-(NSArray *)issues;
-(oneway void)release;
-(id)init;
-(id)_libraryURL;
-(id)_fileManager;
-(id)retain;
-(id)autorelease;
-(void)_saveIfNeeded;
-(id)description;
-(NSArray *)downloadingAssets;
-(id)_contentURL;
-(unsigned long long)retainCount;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_applicationWillTerminate:(id)arg1 ;
-(void)_didFinishLaunchingWasCalled;
-(void)_markIssuesAndSave;
-(id)issueWithName:(id)arg1 ;
-(void)_setIssues:(id)arg1 ;
-(NKIssue *)currentlyReadingIssue;
-(void)setCurrentlyReadingIssue:(NKIssue *)arg1 ;
-(void)_performBackgroundTask:(/*^block*/id)arg1 withDescription:(id)arg2 ;
-(void)_markAsDirtyAndSave;
-(id)_appSupportURL;
-(void)__actuallySave;
-(void)_saveIfNeededAfterDelay:(double)arg1 ;
-(void)_saveNowIfNeeded;
-(id)addIssueWithName:(id)arg1 date:(id)arg2 ;
-(void)removeIssue:(id)arg1 ;
-(id)_issueForDirectory:(id)arg1 ;
-(BOOL)_canPerformBackgroundDownloads;
-(void)_issueChanged:(id)arg1 ;
@end

