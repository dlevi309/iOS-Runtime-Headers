/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

@class EFQuery;


@protocol EDMessageQueryHelperMessageSource
@property (nonatomic,readonly) EFQuery * query; 
@required
-(EFQuery *)query;
-(id)messagesWithAdditionalPredicates:(id)arg1 limit:(long long)arg2;

@end

