/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel, OS_dispatch_queue;
@class SFUCryptoKey, NSObject, NSString;

@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	SFUCryptoKey* _encryptionKey;
	NSObject*<OS_dispatch_queue> _readQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 encryptionKey:(id)arg3 ;
@end

