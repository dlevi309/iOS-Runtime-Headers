/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCyclerBookmarkOperation.h>

@class NSString;

@interface WBSCyclerModifyBookmarkOperation : NSObject <WBSCyclerBookmarkOperation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)executeWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_changeTitleOfBookmark:(id)arg1 withContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_changeURLOfBookmark:(id)arg1 withContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

