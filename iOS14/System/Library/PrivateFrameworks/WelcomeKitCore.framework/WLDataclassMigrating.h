/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@protocol WLDataclassMigrating <NSObject>
@optional
-(BOOL)confirmItemSizeWithSourceBeforeDownloading;
-(void)importDataFromProvider:(/*^block*/id)arg1 forSummaries:(id)arg2 summaryStart:(/*^block*/id)arg3 summaryCompletion:(/*^block*/id)arg4;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2;
-(BOOL)potentiallyLargeRecordData;
-(void)performPreImportPhaseForSummary:(id)arg1 data:(id)arg2;
-(id)importWillBegin;
-(id)importDidEnd;
-(id)safeHarborBundleID;

@required
-(id)dataType;
-(id)contentType;
-(BOOL)accountBased;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;

@end

