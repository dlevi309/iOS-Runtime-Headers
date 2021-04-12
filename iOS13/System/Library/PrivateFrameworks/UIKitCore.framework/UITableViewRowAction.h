/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(/*^block*/id)_handler;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(id)_button;
-(id)_initWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_setButton:(id)arg1 ;
@end

