/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProgressBlock:(id)arg1 ;
-(id)progressBlock;
-(id)initWithConsumers:(id)arg1 expectedSize:(unsigned long long)arg2 ;
-(long long)appendData:(id)arg1 ;
-(id)initWithConsumer:(id)arg1 expectedSize:(unsigned long long)arg2 ;
-(unsigned long long)expectedSize;
@end

