/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString;

@interface PXErrorRecoveryOption : NSObject {

	NSString* _title;
	long long _style;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long style;                    //@synthesize style=_style - In the implementation block
+(id)recoveryOptionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setHandler:(id)arg1 ;
-(void)_attemptRecoveryFromError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)handler;
-(long long)style;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
@end

