/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIStatusBarAction : NSObject {

	BOOL _enabled;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)actionWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)performWithStatusBar:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEnabled;
@end

