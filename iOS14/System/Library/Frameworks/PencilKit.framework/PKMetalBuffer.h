/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPurged;
-(void)unlock;
-(BOOL)lock;
-(id<MTLBuffer>)metalBuffer;
-(id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4 ;
@end

