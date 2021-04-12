/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVOutputDeviceFrecentsWriting <NSObject>
@property (nonatomic,readonly) long long numberOfKeysToBeSet; 
@required
-(long long)numberOfKeysToBeSet;
-(void)setFrecencyInfo:(id)arg1 forDeviceID:(id)arg2;
-(BOOL)persistToDiskReturningError:(id*)arg1;
-(void)removeFrecencyInfoForDeviceID:(id)arg1;

@end

