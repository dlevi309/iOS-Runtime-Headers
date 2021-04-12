/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCPrivateDataSyncManager <NSObject>
@required
-(BOOL)isDirty;
-(void)markAsDirty;
-(void)notifyObservers;
-(BOOL)isAwaitingFirstSync;
-(void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(/*^block*/id)arg3;

@end

