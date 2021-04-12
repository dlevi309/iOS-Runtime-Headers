/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCyclerTestSuite.h>

@class NSArray, WBSCyclerBookmarkOperationContext, WBSCyclerTestSuiteBookmarkAuxiliary, WBSCyclerBookmarkListRepresentation, NSString;

@interface WBSCyclerBookmarksTestSuite : NSObject <WBSCyclerTestSuite> {

	NSArray* _operations;
	NSArray* _relativeProbabilitiesForOperations;
	WBSCyclerBookmarkOperationContext* _operationContext;
	WBSCyclerTestSuiteBookmarkAuxiliary* _bookmarkAuxiliary;
	unsigned long long _iterationCount;
	WBSCyclerBookmarkListRepresentation* _expectedTopLevelBookmarksFromPreviousIteration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
+(BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2 ;
-(id)init;
-(BOOL)isFinished;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)tearDown;
-(void)setUp;
-(void)_validateServerBookmarksWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_validateServerBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_validateServerBookmarksAfterClearingLocallyWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performCloudKitSecondaryMigrationAfterClearingBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(void)runWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

