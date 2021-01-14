/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, TSUDispatchData, NSString;

@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	NSObject*<OS_dispatch_queue> _streamQueue;
	TSUDispatchData* _streamData;
	BOOL _isClosed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serializedData;
-(void)_close;
-(id)init;
-(void)close;
-(void)writeData:(id)arg1 ;
-(id)initWithAlwaysDefragmentData:(BOOL)arg1 ;
@end

