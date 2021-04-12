/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(NSString *)shortTitle;
-(void)setShortTitle:(NSString *)arg1 ;
-(void)setHandlerEnabled:(BOOL)arg1 ;
-(BOOL)handlerEnabled;
-(void)executeHandler;
-(void)executeHandlerIfEnabled;
-(BOOL)shouldDismissCardBeforeExecuteHandler;
-(void)setShouldDismissCardBeforeExecuteHandler:(BOOL)arg1 ;
@end

