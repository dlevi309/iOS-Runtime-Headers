/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol NUPurgeableStorage <NUImageStorage>
@required
-(BOOL)isPurgeable;
-(BOOL)isPurged;
-(BOOL)makeNonPurgeable;
-(void)makePurgeable;
-(long long)purgeLevel;
-(void)adjustPurgeLevel:(long long)arg1;

@end

