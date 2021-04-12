/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel, OS_dispatch_queue, OS_dispatch_data;
@class NSObject, SFUCryptoKey, NSString;

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	NSObject*<OS_dispatch_queue> _readChannelQueue;
	SFUCryptoKey* _decryptionKey;
	NSObject*<OS_dispatch_data> _holdData;
	char* _iv;
	unsigned long long _ivRead;
	CCCryptorRef _cryptor;
	char* _buffer;
	unsigned long long _initialBytesIgnored;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)dealloc;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 ;
@end

