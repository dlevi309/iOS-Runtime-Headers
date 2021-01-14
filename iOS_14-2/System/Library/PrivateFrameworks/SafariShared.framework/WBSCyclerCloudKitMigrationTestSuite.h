/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (getter=isFinished,nonatomic,readonly) BOOL finished;              //@synthesize finished=_finished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2 ;
-(id)init;
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(BOOL)isFinished;
-(void)runWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createRandomBookmarkWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_generateDAVServerIDsForExistingBookmarksWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_errorWithCode:(long long)arg1 ;
-(void)_migrateToCloudKitWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_validateResultsOfMigrationWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchBookmarksPriorToMigrationWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

