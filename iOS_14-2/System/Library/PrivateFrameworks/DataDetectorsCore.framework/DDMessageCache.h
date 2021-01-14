/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableArray;

@interface DDMessageCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _memoryWarningSource;
	NSMutableDictionary* _cache;
	NSMutableArray* _indexLRU;

}
-(id)init;
-(void)removeConversation:(id)arg1 ;
-(void)_pruneIgnoringFirst:(BOOL)arg1 ;
-(id)stringWithElement:(id)arg1 conversationID:(id)arg2 range:(NSRange*)arg3 ;
@end

