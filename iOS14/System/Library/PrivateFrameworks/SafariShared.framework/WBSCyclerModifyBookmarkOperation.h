/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCyclerBookmarkOperation.h>

@class NSString;

@interface WBSCyclerModifyBookmarkOperation : NSObject <WBSCyclerBookmarkOperation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_changeTitleOfBookmark:(id)arg1 withContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_changeURLOfBookmark:(id)arg1 withContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)executeWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

