/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSSystemImplementer;
@class NSXPCConnection;

@interface SBSSystemInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSSystemImplementer> _sbProxy;

}
-(id)init;
-(id)initWithTarget:(id)arg1 ;
-(void)reboot:(id)arg1 ;
-(void)obliterate:(id)arg1 ;
-(void)requestDeferredReboot;
-(void)identifyWithOptions:(id)arg1 ;
@end

