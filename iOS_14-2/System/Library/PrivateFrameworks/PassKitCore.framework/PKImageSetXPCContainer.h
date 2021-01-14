/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)imageSetHash;
-(id)containedImageSet;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithWithXPCObject:(id)arg1 hash:(id)arg2 ;
-(id)initWithWithXPCObject:(id)arg1 length:(unsigned long long)arg2 isSharedMemory:(BOOL)arg3 offset:(unsigned long long)arg4 hash:(id)arg5 ;
-(void)purge;
@end

