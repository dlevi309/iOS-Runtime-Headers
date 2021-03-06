/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)writingFavorites:(/*^block*/id)arg1 ;
-(void)readingFavorites:(/*^block*/id)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1 ;
-(void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2 ;
-(void)finishedReadingRemoteFavorites;
-(void)_simulateCrashReportWithMessage:(id)arg1 ;
-(void)failedToWriteRemoteFavorites:(id)arg1 ;
-(void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3 ;
-(void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2 ;
-(void)failedToConvertFavoritesToPropertyList:(id)arg1 ;
-(void)failedToReadRemoteFavorites:(id)arg1 ;
-(void)rematchingFavorites:(/*^block*/id)arg1 ;
-(NSObject*<OS_os_log>)summaryLog;
-(void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(BOOL)arg3 ;
-(void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(BOOL)arg3 ;
-(void)finishedWritingRemoteFavorites;
-(void)reportFavoritesAccessedBeforeFirstUnlock;
@end

