/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/


@protocol HMHomeManagerDelegate <NSObject>
@optional
-(void)homeManager:(id)arg1 didAddHome:(id)arg2;
-(void)homeManagerDidUpdateHomes:(id)arg1;
-(void)homeManager:(id)arg1 didUpdateAuthorizationStatus:(unsigned long long)arg2;
-(void)homeManagerDidUpdatePrimaryHome:(id)arg1;
-(void)homeManager:(id)arg1 didReceiveAddAccessoryRequest:(id)arg2;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2;

@end

