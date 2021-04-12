/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

@class EFQuery;


@protocol EDMessageQueryHelperMessageSource
@property (nonatomic,readonly) EFQuery * query; 
@required
-(EFQuery *)query;
-(id)messagesWithAdditionalPredicates:(id)arg1 limit:(long long)arg2;

@end

