/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSImplementer;
@class NSXPCConnection;

@interface SBSAppleCareInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSImplementer> _sbProxy;

}
-(id)init;
-(void)setAppleCareIsEnabled:(BOOL)arg1 withOptions:(id)arg2 ;
@end

