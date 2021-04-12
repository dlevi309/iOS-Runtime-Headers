/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


@class NSRunLoop, NSString, UIScreen;

@interface IMDisplayLink : NSObject {

	id _target;
	SEL _selector;
	long long _preferredFramesPerSecond;
	NSRunLoop* _runLoop;
	NSString* _runLoopMode;
	UIScreen* _screen;

}

@property (assign,nonatomic) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign,nonatomic,__weak) NSRunLoop * runLoop;                      //@synthesize runLoop=_runLoop - In the implementation block
@property (nonatomic,retain) NSString * runLoopMode;                          //@synthesize runLoopMode=_runLoopMode - In the implementation block
@property (assign,nonatomic,__weak) UIScreen * screen;                        //@synthesize screen=_screen - In the implementation block
@property (nonatomic,__weak,readonly) id target;                              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                  //@synthesize selector=_selector - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
+(Class)_displayLinkClass;
-(SEL)selector;
-(void)setScreen:(UIScreen *)arg1 ;
-(long long)preferredFramesPerSecond;
-(BOOL)isValid;
-(void)schedule;
-(void)invalidate;
-(UIScreen *)screen;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(id)target;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(NSRunLoop *)runLoop;
-(void)dealloc;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(NSString *)runLoopMode;
-(void)_displayLinkCallback;
@end

