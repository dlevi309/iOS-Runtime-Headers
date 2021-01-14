/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWDeferredIntermediate.h>

@class NSDictionary, NSString;

@interface BWDeferredBufferIntermediate : BWDeferredIntermediate {

	CVBufferRef _buffer;
	NSDictionary* _attributes;
	NSString* _metadataTag;
	unsigned long long _bufferType;
	NSString* _portType;
	int _compressionProfile;

}

@property (nonatomic,readonly) CVBufferRef buffer;                         //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferType;              //@synthesize bufferType=_bufferType - In the implementation block
@property (nonatomic,readonly) NSString * metadataTag;                     //@synthesize metadataTag=_metadataTag - In the implementation block
@property (nonatomic,readonly) NSString * portType;                        //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) int compressionProfile;                     //@synthesize compressionProfile=_compressionProfile - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)flush;
-(int)setBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)_read:(int*)arg1 ;
-(NSString *)portType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBuffer:(CVBufferRef)arg1 tag:(id)arg2 bufferType:(unsigned long long)arg3 metadataTag:(id)arg4 portType:(id)arg5 compressionProfile:(int)arg6 URL:(id)arg7 ;
-(NSDictionary *)attributes;
-(int)setURL:(id)arg1 prefetchQueue:(id)arg2 ;
-(id)fetchAndRetain:(int*)arg1 ;
-(unsigned long long)bufferType;
-(NSString *)metadataTag;
-(CVBufferRef)buffer;
-(id)archive:(int*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)_createCVPixelBufferFromAttributes:(id)arg1 pixelBuffer:(_CVBuffer*)arg2 ;
-(int)_compressionSettingsForProfile:(int)arg1 format:(int*)arg2 options:(id*)arg3 ;
-(int)_writeAndReleaseBacking;
-(int)compressionProfile;
-(void)dealloc;
@end

