/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/

#import <libobjc.A.dylib/TXRBufferMap.h>

@class TXRDefaultBuffer, NSString;

@interface TXRDefaultBufferMap : NSObject <TXRBufferMap> {

	void* _bytes;
	TXRDefaultBuffer* _buffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bytes; 
-(void*)bytes;
-(id)initForBuffer:(id)arg1 withBytes:(void*)arg2 ;
@end

