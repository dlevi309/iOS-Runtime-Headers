/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNFavoritesLogger.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNFavoritesLogger : NSObject <CNFavoritesLogger> {

	NSObject*<OS_os_log> _log;
	NSObject*<OS_os_log> _summaryLog;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log;                     //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> summaryLog;              //@synthesize summaryLog=_summaryLog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)_simulateCrashReportWithMessage:(id)arg1 ;
-(void)readingFavorites:(/*^block*/id)arg1 ;
-(void)writingFavorites:(/*^block*/id)arg1 ;
-(void)rematchingFavorites:(/*^block*/id)arg1 ;
-(void)finishedReadingRemoteFavorites;
-(void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2 ;
-(void)finishedWritingRemoteFavorites;
-(void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2 ;
-(void)failedToReadRemoteFavorites:(id)arg1 ;
-(void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(BOOL)arg3 ;
-(void)failedToConvertFavoritesToPropertyList:(id)arg1 ;
-(void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3 ;
-(void)failedToWriteRemoteFavorites:(id)arg1 ;
-(void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1 ;
-(void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(BOOL)arg3 ;
-(void)reportFavoritesAccessedBeforeFirstUnlock;
-(NSObject*<OS_os_log>)summaryLog;
@end

