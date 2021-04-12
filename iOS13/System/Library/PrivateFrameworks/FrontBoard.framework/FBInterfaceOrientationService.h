/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class FBInterfaceOrientationServiceServer;

@interface FBInterfaceOrientationService : NSObject {

	long long _interfaceOrientation;
	FBInterfaceOrientationServiceServer* _server;

}

@property (nonatomic,readonly) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(id)sharedInstance;
-(id)init;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3 ;
@end

