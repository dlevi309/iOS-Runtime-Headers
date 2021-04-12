/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)provisionalNavigationContext;
+(id)committedNavigationContextWithURL:(id)arg1 ;
+(id)cancellationContextWithReason:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(NSDictionary *)userInfo;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 userInfo:(id)arg2 ;
@end

