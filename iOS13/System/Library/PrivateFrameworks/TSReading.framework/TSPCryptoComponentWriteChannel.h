/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPComponentWriteChannel.h>

@protocol TSPComponentWriteChannel;
@class NSString;

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	id<TSPComponentWriteChannel> _writeChannel;
	CCCryptorRef _cryptor;
	char* _buffer;
	SCD_Struct_TS58 _ccHmacContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
-(void)_writeData:(id)arg1 updateHmac:(BOOL)arg2 ;
-(id)initWithWriteChannel:(id)arg1 encryptionKey:(id)arg2 ;
@end

