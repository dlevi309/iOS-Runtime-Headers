/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSUStreamReadChannel.h>

@protocol SFUInputStream, OS_dispatch_queue;
@class SFUDataRepresentation, NSObject, NSString;

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {

	SFUDataRepresentation* _representation;
	id<SFUInputStream> _inputStream;
	NSObject*<OS_dispatch_queue> _readQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(id)initWithRepresentation:(id)arg1 ;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

