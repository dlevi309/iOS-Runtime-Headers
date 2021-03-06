/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/_MFDAMSBasicConsumer.h>
#import <libobjc.A.dylib/DASearchQueryConsumer.h>

@class NSDate, MFConditionLock, MFMailMessageStoreSearchResult;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer> {

	NSDate* latestDateToAdd;
	NSDate* earliestDateAdded;
	MFConditionLock* doneCondition;
	double timeReceivedLastResponse;
	unsigned totalCount;
	MFMailMessageStoreSearchResult* searchResult;

}

@property (nonatomic,retain) NSDate * latestDateToAdd; 
@property (nonatomic,readonly) NSDate * earliestDateAdded; 
@property (nonatomic,readonly) MFMailMessageStoreSearchResult * searchResult; 
-(MFMailMessageStoreSearchResult *)searchResult;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2 ;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(BOOL)handleItems:(id)arg1 ;
-(void)waitUntilDone;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
-(void)setLatestDateToAdd:(NSDate *)arg1 ;
-(void)resetDoneCondition;
-(NSDate *)latestDateToAdd;
-(NSDate *)earliestDateAdded;
@end

