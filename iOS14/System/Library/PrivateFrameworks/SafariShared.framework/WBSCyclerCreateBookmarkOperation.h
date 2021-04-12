/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCyclerBookmarkOperation.h>

@class NSString;

@interface WBSCyclerCreateBookmarkOperation : NSObject <WBSCyclerBookmarkOperation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)executeWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createRandomLeafWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createRandomListWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_randomListWithContext:(id)arg1 ;
@end

