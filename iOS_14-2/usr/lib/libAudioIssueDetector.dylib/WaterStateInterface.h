/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAudioIssueDetector.dylib
*/


@interface WaterStateInterface : NSObject
+(id)sharedInstance;
-(void)disconnect;
-(void)connect;
-(BOOL)isWaterStateON;
@end

