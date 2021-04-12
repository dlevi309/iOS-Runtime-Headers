/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


@protocol NSFileProviderLiveItemConnectionCoordination
@required
-(unsigned long long)LICCnewConnectionIDOrError:(id*)arg1;
-(void)LICCinvalidateFileNodesForConnection:(unsigned long long)arg1;
-(void)LICCreleaseConnectionAllocation:(unsigned long long)arg1;
-(void)LISMPinvalidateAllConnections;

@end

