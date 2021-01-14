/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SOAuthorizationCore *)authorization;
-(id<SOAuthorizationCoreDelegate>)delegate;
-(id)initWithAuthorization:(id)arg1 delegate:(id)arg2 ;
@end

