/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@protocol WLDataclassMigrating <NSObject>
@optional
-(void)importDataFromProvider:(/*^block*/id)arg1 forSummaries:(id)arg2 summaryStart:(/*^block*/id)arg3 summaryCompletion:(/*^block*/id)arg4;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
-(BOOL)potentiallyLargeRecordData;
-(void)performPreImportPhaseForSummary:(id)arg1 data:(id)arg2;
-(id)importWillBegin;
-(void)importDidEnd;

@required
-(id)contentType;
-(id)dataType;
-(BOOL)accountBased;
-(BOOL)storeRecordDataInDatabase;

@end

