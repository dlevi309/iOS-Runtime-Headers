/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@protocol SFUOutputStream;
@class SFUCryptor, NSString;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mBaseStream;
	SFUCryptor* mCryptor;
	BOOL mIsClosed;
	BOOL mComputeCrc32;
	unsigned mCrc32;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2 ;
-(void)close;
-(BOOL)canSeek;
-(unsigned)crc32;
-(long long)offset;
-(id)inputStream;
-(void)dealloc;
-(id)closeLocalStream;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(BOOL)arg3 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 ;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
@end

