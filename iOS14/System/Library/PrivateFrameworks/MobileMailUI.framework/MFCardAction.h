/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/


@class NSString, UIColor;

@interface MFCardAction : NSObject {

	BOOL _handlerEnabled;
	BOOL _shouldDismissCardBeforeExecuteHandler;
	NSString* _imageName;
	UIColor* _tintColor;
	NSString* _title;
	NSString* _shortTitle;
	/*^block*/id _handler;

}

@property (nonatomic,retain) NSString * imageName;                                    //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                     //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * shortTitle;                                     //@synthesize shortTitle=_shortTitle - In the implementation block
@property (assign,nonatomic) BOOL handlerEnabled;                                     //@synthesize handlerEnabled=_handlerEnabled - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissCardBeforeExecuteHandler;              //@synthesize shouldDismissCardBeforeExecuteHandler=_shouldDismissCardBeforeExecuteHandler - In the implementation block
+(id)cardActionWithTitle:(id)arg1 shortTitle:(id)arg2 imageName:(id)arg3 tintColor:(id)arg4 handlerEnabled:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
+(id)cardActionWithTitle:(id)arg1 shortTitle:(id)arg2 imageName:(id)arg3 tintColor:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)shortTitle;
-(id)handler;
-(void)setShortTitle:(NSString *)arg1 ;
-(UIColor *)tintColor;
-(NSString *)title;
-(void)setHandlerEnabled:(BOOL)arg1 ;
-(BOOL)handlerEnabled;
-(void)executeHandler;
-(void)executeHandlerIfEnabled;
-(BOOL)shouldDismissCardBeforeExecuteHandler;
-(void)setShouldDismissCardBeforeExecuteHandler:(BOOL)arg1 ;
@end

