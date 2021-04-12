/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSUStreamReadChannel.h>

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

