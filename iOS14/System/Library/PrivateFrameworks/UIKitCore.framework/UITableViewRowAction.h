/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIVisualEffect;

@interface UITableViewRowAction : NSObject <NSCopying> {

	long long _style;
	NSString* _title;
	UIColor* _backgroundColor;
	/*^block*/id _handler;
	UIVisualEffect* _backgroundEffect;

}

@property (getter=_handler,nonatomic,readonly) id handler;                 //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
+(id)rowActionWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)_button;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(id)_initWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(/*^block*/id)_handler;
-(void)_setButton:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(long long)style;
-(NSString *)title;
@end

