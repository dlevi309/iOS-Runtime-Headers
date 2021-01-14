/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@protocol ENGroupContextDataSource <NSObject>
@required
-(void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(/*^block*/id)arg4;
-(void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)participantsForCypher:(id)arg1 completion:(/*^block*/id)arg2;
-(void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(/*^block*/id)arg3;

@end

