/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSArray, NSString, NSMutableDictionary, NSDate;

@interface SGMessagePairIterator : NSObject {

	NSArray* _messageEvents;
	unsigned long long _messageEventCount;
	unsigned long long _messageEventIndex;
	unsigned long long _maxReplyGap;
	unsigned long long _maxReplyLength;
	BOOL _done;
	NSString* _attachmentCharacterString;
	NSString* _breadcrumbCharacterString;
	NSMutableDictionary* _latestPromptForHandle;
	NSDate* _latestProcessedDate;

}

@property (nonatomic,readonly) NSDate * latestProcessedDate;              //@synthesize latestProcessedDate=_latestProcessedDate - In the implementation block
-(id)nextMessagePair;
-(NSDate *)latestProcessedDate;
-(BOOL)isDoneIterating;
-(id)initWithStartDate:(id)arg1 maxBatchSize:(unsigned long long)arg2 maxReplyLength:(unsigned long long)arg3 maxReplyGap:(double)arg4 ;
-(id)handleFromConversationId:(id)arg1 ;
-(id)removeBreadcrumbsFromMessage:(id)arg1 ;
@end

