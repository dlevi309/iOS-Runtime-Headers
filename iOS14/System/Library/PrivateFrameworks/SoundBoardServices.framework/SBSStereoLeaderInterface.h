/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSImplementer;
@class NSXPCConnection;

@interface SBSStereoLeaderInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSImplementer> _sbProxy;

}
-(id)init;
-(id)initWithTarget:(id)arg1 ;
-(void)isFollower:(/*^block*/id)arg1 ;
-(void)setDeviceAsStereoLeader:(BOOL)arg1 withOptions:(id)arg2 ;
@end

