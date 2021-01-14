/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKCollectionUpdater <NSObject>
@required
-(void)appendBatchOfCollections:(id)arg1;
-(void)updateCollectionsWithoutPreparingSnapshot:(id)arg1 usingBatchedIdentifiers:(id)arg2 usingCollectionFetcher:(id)arg3 usingGuideConsumer:(id)arg4 usingBatchSize:(unsigned long long)arg5;
-(void)updateUsingBatchedIdentifiers:(id)arg1 usingCollectionFetcher:(id)arg2 usingBatchSize:(unsigned long long)arg3;
-(void)updateCollections:(id)arg1 usingBatchedIdentifiers:(id)arg2 usingCollectionFetcher:(id)arg3 usingBatchSize:(unsigned long long)arg4;

@end

