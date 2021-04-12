/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol NSCopying;
@class NSString, UIColor;

@interface HUPocketButtonDescriptor : NSObject {

	unsigned long long _style;
	NSString* _title;
	id<NSCopying> _userInfo;
	id _target;
	SEL _action;
	/*^block*/id _block;

}

@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id<NSCopying> userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) unsigned long long style;                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id target;                         //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                               //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id block;                                   //@synthesize block=_block - In the implementation block
+(id)descriptorWithTitle:(id)arg1 style:(unsigned long long)arg2 target:(id)arg3 action:(SEL)arg4 userInfo:(id)arg5 ;
+(id)descriptorWithTitle:(id)arg1 style:(unsigned long long)arg2 userInfo:(id)arg3 block:(/*^block*/id)arg4 ;
-(id<NSCopying>)userInfo;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)block;
-(void)setUserInfo:(id<NSCopying>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(SEL)action;
-(void)execute;
-(void)setBlock:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setAction:(SEL)arg1 ;
-(UIColor *)textColor;
@end

