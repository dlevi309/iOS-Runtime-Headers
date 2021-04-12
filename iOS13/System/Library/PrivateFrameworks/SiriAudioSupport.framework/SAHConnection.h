/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriAudioSupport.framework/SiriAudioSupport
*/


@interface SAHConnection : NSObject {

	 xpcConnection;

}
+(id)sharedConnection;
-(id)init;
-(void)dealloc;
-(void)recordAppSelectionSignalsForIntent:(id)arg1 force:(BOOL)arg2 test:(BOOL)arg3 ;
-(void)recordPostEngagementSignalsForIntent:(id)arg1 response:(id)arg2 force:(BOOL)arg3 test:(BOOL)arg4 ;
@end

