/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/


@protocol BNPresentable;
@class NSDictionary, NSUUID;

@interface BNPostingContext : NSObject {

	id<BNPresentable> _presentable;
	unsigned long long _presentationOptions;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSUUID * pendingIdentifier; 
@property (nonatomic,readonly) id<BNPresentable> presentable;                       //@synthesize presentable=_presentable - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationOptions;              //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                        //@synthesize userInfo=_userInfo - In the implementation block
-(NSDictionary *)userInfo;
-(unsigned long long)presentationOptions;
-(id<BNPresentable>)presentable;
-(id)initWithPresentable:(id)arg1 presentationOptions:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(NSUUID *)pendingIdentifier;
@end

