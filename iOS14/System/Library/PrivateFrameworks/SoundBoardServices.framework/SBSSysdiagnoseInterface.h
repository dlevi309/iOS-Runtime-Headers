/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSSysdiagnoseImplementer;
@class NSXPCConnection;

@interface SBSSysdiagnoseInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSSysdiagnoseImplementer> _sbProxy;

}
-(id)init;
-(id)initWithTarget:(id)arg1 ;
-(void)sysdiagnoseHasStarted:(BOOL)arg1 ;
@end

