/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSURLCompletionSessionProtocol.h>

@class WBSHistoryService;

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionSessionProtocol> {

	WBSHistoryService* _historyService;

}
-(id)initWithHistoryService:(id)arg1 ;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

