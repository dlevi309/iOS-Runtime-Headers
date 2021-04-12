/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PROPlugInDelegate <PROAPIAccessing>
@required
-(id)plugInGroupWithUUID:(CFUUIDRef)arg1;
-(void)plugInCouldNotInitialize:(id)arg1;
-(void)plugIn:(id)arg1 didError:(id)arg2;
-(BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1;
-(id)apiManagerForPlugInInstances;

@end

