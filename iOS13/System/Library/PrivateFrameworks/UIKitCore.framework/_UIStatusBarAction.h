/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIStatusBarAction : NSObject {

	BOOL _enabled;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)actionWithBlock:(/*^block*/id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)block;
-(BOOL)isEnabled;
-(void)setBlock:(id)arg1 ;
-(void)performWithStatusBar:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

