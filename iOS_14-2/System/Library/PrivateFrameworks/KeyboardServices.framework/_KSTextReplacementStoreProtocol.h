/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@protocol _KSTextReplacementStoreProtocol <NSObject>
@required
-(void)removeAllEntries;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(id)textReplacementEntries;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1;

@end

