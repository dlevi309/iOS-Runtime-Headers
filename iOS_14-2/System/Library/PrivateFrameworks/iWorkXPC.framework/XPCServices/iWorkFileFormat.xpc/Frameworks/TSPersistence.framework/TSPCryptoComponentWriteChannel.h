/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPComponentWriteChannel.h>

@protocol TSPComponentWriteChannel;
@class NSString;

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	id<TSPComponentWriteChannel> _writeChannel;
	CCCryptorRef _cryptor;
	char* _buffer;
	SCD_Struct_TS242 _ccHmacContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)writeData:(id)arg1 ;
-(void)dealloc;
-(void)_writeData:(id)arg1 updateHmac:(BOOL)arg2 ;
-(id)initWithWriteChannel:(id)arg1 encryptionKey:(id)arg2 ;
@end

