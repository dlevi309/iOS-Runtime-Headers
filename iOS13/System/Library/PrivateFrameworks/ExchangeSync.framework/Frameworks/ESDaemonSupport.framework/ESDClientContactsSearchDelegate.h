/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/

#import <ESDaemonSupport/ESDClientDelegate.h>
#import <libobjc.A.dylib/DASearchQueryConsumer.h>

@class DASearchQuery, NSData;

@interface ESDClientContactsSearchDelegate : ESDClientDelegate <DASearchQueryConsumer> {

	DASearchQuery* _query;
	NSData* _queryResultData;

}

@property (nonatomic,retain) DASearchQuery * query;                 //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSData * queryResultData;              //@synthesize queryResultData=_queryResultData - In the implementation block
-(void)dealloc;
-(DASearchQuery *)query;
-(void)setQuery:(DASearchQuery *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)disable;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)beginQuery;
-(void)setQueryResultData:(NSData *)arg1 ;
-(NSData *)queryResultData;
-(id)initWithAccountID:(id)arg1 queryDictionary:(id)arg2 client:(id)arg3 ;
@end

