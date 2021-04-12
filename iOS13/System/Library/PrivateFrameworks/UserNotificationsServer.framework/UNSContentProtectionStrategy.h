/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol UNSContentProtectionStrategy <NSObject>
@optional
-(void)importDataWithImportHandler:(/*^block*/id)arg1;

@required
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2;
-(BOOL)dataIsAvailableAtPath:(id)arg1;
-(id)dataAtPath:(id)arg1;
-(BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
-(void)migrateDataAtPath:(id)arg1 toPath:(id)arg2;

@end

