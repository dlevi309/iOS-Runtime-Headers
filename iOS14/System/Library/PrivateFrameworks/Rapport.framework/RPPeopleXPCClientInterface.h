/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol RPPeopleXPCClientInterface
@required
-(void)xpcPeopleStatusChanged:(unsigned)arg1;
-(void)xpcPersonID:(id)arg1 deviceID:(id)arg2 updatedMeasurement:(id)arg3;
-(void)xpcPersonFound:(id)arg1;
-(void)xpcPersonLost:(id)arg1;
-(void)xpcPersonChanged:(id)arg1 changes:(unsigned)arg2;

@end

