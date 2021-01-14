/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ignoreCacheForRecordIDs:(id)arg3 ;
-(id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ;
@end

