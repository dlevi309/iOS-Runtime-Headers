/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFetchOperation.h>

@class FCRecordSource, NSArray, NSDictionary, FCInterestToken;

@interface FCRecordsFetchOperation : FCFetchOperation {

	FCRecordSource* _recordSource;
	NSArray* _recordIdentifiers;
	NSArray* _ignoreCacheForRecordIDs;
	NSDictionary* _holdTokens;
	FCInterestToken* _fetchToken;
	FCInterestToken* _refreshToken;

}
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ;
-(id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ignoreCacheForRecordIDs:(id)arg3 ;
@end

