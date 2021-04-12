/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol UNSContentProtectionStrategy <NSObject>
@optional
-(void)importDataWithImportHandler:(/*^block*/id)arg1;

@required
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2;
-(BOOL)dataIsAvailableAtPath:(id)arg1;
-(BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
-(void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;
-(id)dataAtPath:(id)arg1;

@end

