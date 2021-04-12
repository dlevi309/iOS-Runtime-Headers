/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@protocol _KSTextReplacementStoreProtocol <NSObject>
@required
-(void)removeAllEntries;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1;
-(id)textReplacementEntries;

@end

