/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@interface SBFSecureDisplayCoordinator : NSObject {

	BOOL _inSecureMode;

}

@property (assign,getter=inSecureMode,nonatomic) BOOL secureMode;              //@synthesize inSecureMode=_inSecureMode - In the implementation block
-(BOOL)inSecureMode;
-(void)setSecureMode:(BOOL)arg1 postNotification:(BOOL)arg2 ;
-(void)setSecureMode:(BOOL)arg1 ;
@end

