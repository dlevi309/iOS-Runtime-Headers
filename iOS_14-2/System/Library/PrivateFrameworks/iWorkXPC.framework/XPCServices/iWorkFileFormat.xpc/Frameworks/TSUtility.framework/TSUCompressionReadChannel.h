/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel;
@class TSUStreamCompression, NSString;

@interface TSUCompressionReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	TSUStreamCompression* _compressor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)dealloc;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)readWithHandlerAndWait:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 compressionAlgorithm:(int)arg2 operation:(int)arg3 ;
@end

