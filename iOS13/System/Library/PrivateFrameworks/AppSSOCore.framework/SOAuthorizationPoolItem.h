/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/


@protocol SOAuthorizationCoreDelegate;
@class SOAuthorizationCore;

@interface SOAuthorizationPoolItem : NSObject {

	SOAuthorizationCore* _authorization;
	id<SOAuthorizationCoreDelegate> _delegate;

}

@property (nonatomic,readonly) SOAuthorizationCore * authorization;                   //@synthesize authorization=_authorization - In the implementation block
@property (nonatomic,readonly) id<SOAuthorizationCoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SOAuthorizationCoreDelegate>)delegate;
-(SOAuthorizationCore *)authorization;
-(id)initWithAuthorization:(id)arg1 delegate:(id)arg2 ;
@end

