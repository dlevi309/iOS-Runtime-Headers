/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(SEL)selector;
-(void)invalidate;
-(BOOL)isValid;
-(id)target;
-(NSRunLoop *)runLoop;
-(UIScreen *)screen;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)schedule;
-(void)setScreen:(UIScreen *)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(NSString *)runLoopMode;
-(void)setRunLoopMode:(NSString *)arg1 ;
-(void)_displayLinkCallback;
@end

