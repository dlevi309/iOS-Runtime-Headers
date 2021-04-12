/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
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
-(void)dealloc;
-(void)close;
-(long long)offset;
-(id)inputStream;
-(unsigned)crc32;
-(BOOL)canSeek;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)closeLocalStream;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(BOOL)arg3 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 ;
@end

