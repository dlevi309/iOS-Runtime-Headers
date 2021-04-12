/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol RPPeopleXPCClientInterface
@required
-(void)xpcPeopleStatusChanged:(unsigned)arg1;
-(void)xpcPersonFound:(id)arg1;
-(void)xpcPersonLost:(id)arg1;
-(void)xpcPersonChanged:(id)arg1 changes:(unsigned)arg2;
-(void)xpcPersonID:(id)arg1 deviceID:(id)arg2 updatedMeasurement:(id)arg3;

@end

