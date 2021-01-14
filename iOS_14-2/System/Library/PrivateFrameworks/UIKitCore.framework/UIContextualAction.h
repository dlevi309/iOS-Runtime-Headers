/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isDestructive;
-(void)setImage:(UIImage *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIImage *)image;
-(UIColor *)backgroundColor;
-(id)description;
-(id)preHandler;
-(void)setPreHandler:(id)arg1 ;
-(void)_completeWithResult:(BOOL)arg1 ;
-(void)executePreHandlerWithView:(id)arg1 ;
-(void)executeHandlerWithView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)forcesFallbackBackgroundColor;
-(void)setForcesFallbackBackgroundColor:(BOOL)arg1 ;
-(id)handler;
-(void)cancel;
-(long long)style;
-(NSString *)title;
@end

