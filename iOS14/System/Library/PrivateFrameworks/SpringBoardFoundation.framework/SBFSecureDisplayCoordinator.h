/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@interface SBFSecureDisplayCoordinator : NSObject {

	BOOL _inSecureMode;

}

@property (assign,getter=inSecureMode,nonatomic) BOOL secureMode;              //@synthesize inSecureMode=_inSecureMode - In the implementation block
-(void)setSecureMode:(BOOL)arg1 ;
-(BOOL)inSecureMode;
-(void)setSecureMode:(BOOL)arg1 postNotification:(BOOL)arg2 ;
@end

