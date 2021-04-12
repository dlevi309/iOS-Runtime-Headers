/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSPasswordBreachHelperProtocol.h>

@interface WBSPasswordBreachHelper : NSObject <WBSPasswordBreachHelperProtocol>
-(void)runLookupSessionIgnoringMinimumDelay:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getResultRecordDictionariesForResultQueryDictionaries:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addResultRecordDictionaries:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

