/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSConnectionDelegate;
@class NSXPCConnection;

@interface SBSSettingsInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSConnectionDelegate> _connectionDelegate;

}
-(id)initWithDelegate:(id)arg1 ;
-(void)homeKitSettingForKeyPathChanged:(id)arg1 updatedValue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deviceAttributeChanged:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleConnectionInterrupted;
-(void)handleConnectionInvalidated;
@end

