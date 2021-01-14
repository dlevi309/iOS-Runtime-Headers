/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSCannedDemoServiceImplementer;
@class NSXPCConnection;

@interface SBSCannedDemoInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSCannedDemoServiceImplementer> _sbProxy;

}
-(id)init;
-(id)initWithTarget:(id)arg1 ;
-(void)siriUtteranceFileToBePlayed:(id)arg1 duckMusic:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
@end

