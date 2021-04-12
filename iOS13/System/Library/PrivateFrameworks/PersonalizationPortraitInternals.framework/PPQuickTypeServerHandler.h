/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPQuickTypeServerProtocol.h>

@interface PPQuickTypeServerHandler : NSObject <PPQuickTypeServerProtocol>
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)warmUpWithCompletion:(/*^block*/id)arg1 ;
-(void)hibernateWithCompletion:(/*^block*/id)arg1 ;
@end

