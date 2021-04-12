/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/PKMetalResource.h>

@protocol MTLBuffer;
@class NSString;

@interface PKMetalBuffer : NSObject <PKMetalResource> {

	unsigned long long _lockCount;
	Ai _isPurged;
	id<MTLBuffer> _metalBuffer;

}

@property (nonatomic,readonly) id<MTLBuffer> metalBuffer;              //@synthesize metalBuffer=_metalBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)lock;
-(void)unlock;
-(id<MTLBuffer>)metalBuffer;
-(BOOL)isPurged;
-(id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4 ;
@end

