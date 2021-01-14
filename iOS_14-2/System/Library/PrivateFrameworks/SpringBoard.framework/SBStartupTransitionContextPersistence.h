/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

