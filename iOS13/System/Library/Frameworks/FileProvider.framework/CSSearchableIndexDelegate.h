/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol CSSearchableIndexDelegate <NSObject>
@optional
-(void)searchableIndexDidThrottle:(id)arg1;
-(void)searchableIndexDidFinishThrottle:(id)arg1;
-(id)dataForSearchableIndex:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 error:(out id*)arg4;
-(id)fileURLForSearchableIndex:(id)arg1 itemIdentifier:(id)arg2 typeIdentifier:(id)arg3 inPlace:(BOOL)arg4 error:(out id*)arg5;

@required
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3;

@end

