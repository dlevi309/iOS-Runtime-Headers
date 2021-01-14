/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@protocol DADataElement <NSObject>
@required
-(void)setLocalItem:(void*)arg1;
-(BOOL)deleteFromContainer:(void*)arg1;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)loadLocalItemWithAccount:(id)arg1;

@end

