/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSStereoLeaderRoleImplementer;
@class NSXPCConnection;

@interface SBSStereoLeaderInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSStereoLeaderRoleImplementer> _sbProxy;

}
-(id)init;
-(void)setDeviceAsStereoLeader:(BOOL)arg1 withOptions:(id)arg2 ;
@end

