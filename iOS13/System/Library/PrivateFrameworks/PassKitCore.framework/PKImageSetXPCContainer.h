/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSData;

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding> {

	unsigned long long _length;
	BOOL _isShmem;
	unsigned long long _offset;
	NSObject*<OS_xpc_object> _data;
	NSData* _imageSetHash;

}

@property (nonatomic,readonly) NSData * imageSetHash;              //@synthesize imageSetHash=_imageSetHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)purge;
-(NSData *)imageSetHash;
-(id)containedImageSet;
-(id)initWithWithXPCObject:(id)arg1 hash:(id)arg2 ;
-(id)initWithWithXPCObject:(id)arg1 length:(unsigned long long)arg2 isSharedMemory:(BOOL)arg3 offset:(unsigned long long)arg4 hash:(id)arg5 ;
@end

