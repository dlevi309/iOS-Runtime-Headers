/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUStreamWriteChannel.h>

@protocol TSUStreamWriteChannel;
@class TSUStreamCompression, NSString;

@interface TSUCompressionWriteChannel : NSObject <TSUStreamWriteChannel> {

	id<TSUStreamWriteChannel> _writeChannel;
	TSUStreamCompression* _compressor;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)close;
-(BOOL)isValid;
-(void)dealloc;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(id)initWithWriteChannel:(id)arg1 compressionAlgorithm:(int)arg2 operation:(int)arg3 ;
@end

