/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSUStreamReadChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, TSPPasteboard, NSString;

@interface TSPPasteboardReadChannel : NSObject <TSUStreamReadChannel> {

	NSObject*<OS_dispatch_queue> _readQueue;
	TSPPasteboard* _pasteboard;
	NSString* _pasteboardType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close;
-(id)init;
-(void)close;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)readWithHandlerAndWait:(/*^block*/id)arg1 ;
-(id)initWithPasteboard:(id)arg1 pasteboardType:(id)arg2 ;
@end

