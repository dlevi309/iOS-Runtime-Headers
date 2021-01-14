/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

