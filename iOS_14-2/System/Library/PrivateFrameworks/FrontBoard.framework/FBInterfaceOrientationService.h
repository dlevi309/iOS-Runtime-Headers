/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3 ;
-(long long)interfaceOrientation;
@end

