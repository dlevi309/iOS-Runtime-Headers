/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCyclerTestSuite.h>

@class WBSCyclerTestSuiteBookmarkAuxiliary, WBSCyclerBookmarkListRepresentation, NSString;

@interface WBSCyclerCloudKitMigrationTestSuite : NSObject <WBSCyclerTestSuite> {

	WBSCyclerTestSuiteBookmarkAuxiliary* _bookmarkAuxiliary;
	unsigned long long _bookmarksGeneratedPriorToMigration;
	WBSCyclerBookmarkListRepresentation* _topLevelBookmarksPriorToMigration;
	BOOL _hasValidatedResultsOfPrimaryMigration;
	BOOL _finished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished;              //@synthesize finished=_finished - In the implementation block
+(BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2 ;
-(id)init;
-(BOOL)isFinished;
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(void)runWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createRandomBookmarkWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_generateDAVServerIDsForExistingBookmarksWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_migrateToCloudKitWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_validateResultsOfMigrationWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchBookmarksPriorToMigrationWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_errorWithCode:(long long)arg1 ;
@end

