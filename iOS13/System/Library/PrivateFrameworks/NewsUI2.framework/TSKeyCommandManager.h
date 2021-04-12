/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@interface TSKeyCommandManager : NSObject {

	 keyCommandManager;
	 hasBeenTraversed;
	 keyCommandProvider;

}

@property (assign,nonatomic) BOOL hasBeenTraversed; 
-(id)init;
-(void)invalidate;
-(id)keyCommands;
-(void)setHasBeenTraversed:(BOOL)arg1 ;
-(BOOL)hasBeenTraversed;
-(void)registerController:(id)arg1 withSelector:(SEL)arg2 ;
-(void)registerKeys:(id)arg1 ;
-(void)handleKeyPressWithCommand:(id)arg1 ;
-(void)handleKeyPressWithKey:(id)arg1 flags:(long long)arg2 ;
-(void)registerProviderWithScrollView:(id)arg1 ;
@end

