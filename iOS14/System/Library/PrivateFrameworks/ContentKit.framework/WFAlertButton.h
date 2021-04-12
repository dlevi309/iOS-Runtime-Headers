/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSString, WFAlert;

@interface WFAlertButton : NSObject {

	BOOL _preferred;
	NSString* _title;
	long long _style;
	/*^block*/id _handler;
	WFAlert* _alert;

}

@property (nonatomic,copy,readonly) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) WFAlert * alert;                           //@synthesize alert=_alert - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long style;                                //@synthesize style=_style - In the implementation block
@property (getter=isPreferred,nonatomic,readonly) BOOL preferred;              //@synthesize preferred=_preferred - In the implementation block
+(id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)cancelButtonWithHandler:(/*^block*/id)arg1 ;
+(id)okButtonWithHandler:(/*^block*/id)arg1 ;
+(id)buttonWithTitle:(id)arg1 style:(long long)arg2 preferred:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
+(id)cancelButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)okButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)isPreferred;
-(void)setAlert:(WFAlert *)arg1 ;
-(WFAlert *)alert;
-(id)handler;
-(long long)style;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 preferred:(BOOL)arg4 ;
@end

