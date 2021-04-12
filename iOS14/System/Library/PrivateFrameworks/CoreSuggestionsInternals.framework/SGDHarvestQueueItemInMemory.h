/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class SGDHarvestQueueInMemory, NSString;

@interface SGDHarvestQueueItemInMemory : SGDHarvestQueueItem {

	BOOL _highPriority;
	SGDHarvestQueueInMemory* _parentQueue;
	BOOL _inProgress;
	BOOL _beingDeleted;
	NSString* _sourceKey;
	NSString* _messageId;

}

@property (nonatomic,readonly) NSString * sourceKey;              //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) NSString * messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (assign) BOOL inProgress;                               //@synthesize inProgress=_inProgress - In the implementation block
@property (assign) BOOL beingDeleted;                             //@synthesize beingDeleted=_beingDeleted - In the implementation block
-(void)finish;
-(void)setInProgress:(BOOL)arg1 ;
-(void)markAsFailed;
-(BOOL)beingDeleted;
-(void)setBeingDeleted:(BOOL)arg1 ;
-(id)description;
-(BOOL)highPriority;
-(BOOL)inProgress;
-(NSString *)sourceKey;
-(id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3 sourceKey:(id)arg4 messageId:(id)arg5 highPriority:(BOOL)arg6 customPriorityCriteria:(unsigned char)arg7 parentQueue:(id)arg8 ;
-(NSString *)messageId;
@end

