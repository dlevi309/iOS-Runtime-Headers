/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWDeferredDictionaryIntermediate.h>

@class NSString;

@interface BWDeferredMetadataIntermediate : BWDeferredDictionaryIntermediate {

	NSString* _bufferTag;

}

@property (nonatomic,readonly) NSString * bufferTag;              //@synthesize bufferTag=_bufferTag - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)bufferTag;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMetadata:(id)arg1 tag:(id)arg2 bufferTag:(id)arg3 URL:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

