/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <libobjc.A.dylib/SFUInputStream.h>

@protocol SFUInputStream;
@class SFUCryptor, NSString;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {

	id<SFUInputStream> mBaseStream;
	SFUCryptor* mCryptor;
	long long mOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(BOOL)canSeek;
-(long long)offset;
-(void)seekToOffset:(long long)arg1 ;
-(void)dealloc;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2 ;
@end

