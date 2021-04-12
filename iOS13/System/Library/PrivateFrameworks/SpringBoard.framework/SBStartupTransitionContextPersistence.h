/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBBootDefaults;

@interface SBStartupTransitionContextPersistence : NSObject {

	SBBootDefaults* _bootDefaults;
	BOOL _loginSession;

}
-(id)initWithBootDefaults:(id)arg1 loginSession:(BOOL)arg2 ;
-(id)readTransitionContext;
-(void)saveContext:(id)arg1 ;
@end

