/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSData;

@interface BRCChecksummingOutputStream : NSOutputStream {

	CC_SHA1state_st _ctx;
	unsigned char _sig[21];
	BOOL _isOpen;

}

@property (nonatomic,readonly) NSData * signature; 
+(id)checksummingOutputStreamWithTag:(unsigned char)arg1 ;
-(void)open;
-(void)close;
-(unsigned long long)streamStatus;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(id)initWithTag:(unsigned char)arg1 ;
-(NSData *)signature;
@end

