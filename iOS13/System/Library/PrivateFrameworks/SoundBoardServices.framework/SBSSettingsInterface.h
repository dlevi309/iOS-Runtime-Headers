/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSImplementer, SBSConnectionDelegate;
@class NSXPCConnection;

@interface SBSSettingsInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSImplementer> _sbProxy;
	id<SBSConnectionDelegate> _connectionDelegate;

}
-(id)initWithDelegate:(id)arg1 ;
-(void)homeKitSettingForKeyPathChanged:(id)arg1 updatedValue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deviceAttributeChanged:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleConnectionInterrupted;
-(void)handleConnectionInvalidated;
@end

