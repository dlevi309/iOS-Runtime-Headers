/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString;

@interface AMSDialogButton : NSObject {

	/*^block*/id _handler;
	long long _style;
	NSString* _title;

}

@property (nonatomic,copy) id handler;                     //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;               //@synthesize title=_title - In the implementation block
+(id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)buttonWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setHandler:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)handler;
-(long long)style;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
@end

