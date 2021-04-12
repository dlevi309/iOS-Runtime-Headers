/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKStudentDaemonXPCInterface
@required
-(void)fetchConfiguration:(/*^block*/id)arg1;
-(void)setConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setActiveStudentIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)studentDidAuthenticate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchResourceFromURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchSetOfActiveRestrictionUUIDsForClientType:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchConfigurationType:(/*^block*/id)arg1;
-(void)setAdHocConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAdHocConfiguration:(/*^block*/id)arg1;

@end

