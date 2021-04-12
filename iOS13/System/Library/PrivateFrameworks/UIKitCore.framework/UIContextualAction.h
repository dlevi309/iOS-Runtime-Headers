/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, UIColor, UIImage;

@interface UIContextualAction : NSObject {

	BOOL _forcesFallbackBackgroundColor;
	long long _style;
	/*^block*/id _handler;
	NSString* _title;
	UIColor* _backgroundColor;
	UIImage* _image;
	/*^block*/id _completionHandler;
	/*^block*/id _preHandler;

}

@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) BOOL forcesFallbackBackgroundColor;              //@synthesize forcesFallbackBackgroundColor=_forcesFallbackBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL isDestructive; 
@property (nonatomic,copy) id preHandler;                                     //@synthesize preHandler=_preHandler - In the implementation block
@property (nonatomic,readonly) long long style;                               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIImage * image;                                   //@synthesize image=_image - In the implementation block
+(id)contextualActionWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)description;
-(id)handler;
-(void)cancel;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_completeWithResult:(BOOL)arg1 ;
-(BOOL)isDestructive;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)preHandler;
-(void)executePreHandlerWithView:(id)arg1 ;
-(void)executeHandlerWithView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)forcesFallbackBackgroundColor;
-(void)setForcesFallbackBackgroundColor:(BOOL)arg1 ;
-(void)setPreHandler:(id)arg1 ;
@end

