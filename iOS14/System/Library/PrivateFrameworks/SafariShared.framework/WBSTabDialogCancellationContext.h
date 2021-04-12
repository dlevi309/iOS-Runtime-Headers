/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSDictionary;

@interface WBSTabDialogCancellationContext : NSObject {

	NSString* _reason;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * reason;                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)tabClosedContext;
+(id)cancellationContextWithReason:(id)arg1 userInfo:(id)arg2 ;
+(id)provisionalNavigationContext;
+(id)committedNavigationContextWithURL:(id)arg1 ;
-(id)initWithReason:(id)arg1 userInfo:(id)arg2 ;
-(NSDictionary *)userInfo;
-(id)init;
-(NSString *)reason;
@end

