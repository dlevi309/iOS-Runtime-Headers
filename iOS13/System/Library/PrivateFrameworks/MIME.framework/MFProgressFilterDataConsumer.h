/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer {

	unsigned long long _expectedSize;
	unsigned long long _currentBytes;
	/*^block*/id _progressBlock;

}

@property (nonatomic,copy) id progressBlock;                       //@synthesize progressBlock=_progressBlock - In the implementation block
@property (readonly) unsigned long long expectedSize;              //@synthesize expectedSize=_expectedSize - In the implementation block
-(long long)appendData:(id)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(id)initWithConsumers:(id)arg1 expectedSize:(unsigned long long)arg2 ;
-(id)initWithConsumer:(id)arg1 expectedSize:(unsigned long long)arg2 ;
-(unsigned long long)expectedSize;
@end

