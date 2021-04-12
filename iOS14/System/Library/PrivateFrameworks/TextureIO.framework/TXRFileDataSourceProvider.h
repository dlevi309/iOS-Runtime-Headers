/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/

#import <libobjc.A.dylib/TXRDataSourceProvider.h>

@protocol TXRBufferAllocator, OS_dispatch_queue, OS_dispatch_semaphore, TXRParser;
@class NSObject, TXRTextureInfo, NSString;

@interface TXRFileDataSourceProvider : NSObject <TXRDataSourceProvider> {

	id<TXRBufferAllocator> _bufferAllocator;
	NSObject*<OS_dispatch_queue> _fileIOQueue;
	NSObject*<OS_dispatch_semaphore> _infoLoaded;
	id<TXRParser> _parser;
	TXRTextureInfo* _textureInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)provideTextureInfo;
-(id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 ;
-(unsigned long long)_determineFileType:(id)arg1 ;
-(id)initWithURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)_parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
@end

