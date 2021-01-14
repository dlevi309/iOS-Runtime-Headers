/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@interface TSKeyCommandManager : NSObject {

	 keyCommandManager;
	 hasBeenTraversed;
	 keyCommandProvider;

}

@property (assign,nonatomic) BOOL hasBeenTraversed; 
-(void)setHasBeenTraversed:(BOOL)arg1 ;
-(id)keyCommands;
-(id)init;
-(BOOL)hasBeenTraversed;
-(void)registerProviderWithScrollView:(id)arg1 ;
-(void)registerController:(id)arg1 withSelector:(SEL)arg2 ;
-(void)invalidate;
-(void)handleKeyPressWithCommand:(id)arg1 ;
-(void)registerKeys:(id)arg1 ;
-(void)handleKeyPressWithKey:(id)arg1 flags:(long long)arg2 ;
@end

