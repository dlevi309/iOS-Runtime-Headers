/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface BWDeferredIntermediate : NSObject <NSSecureCoding> {

	opaque_pthread_mutex_t _lock;
	opaque_pthread_cond_t _cv;
	NSString* _tag;
	NSURL* _URL;
	BOOL _prefetching;
	BOOL _dirty;

}

@property (nonatomic,readonly) NSString * tag;              //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                 //@synthesize URL=_URL - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(int)flush;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)tag;
-(int)setURL:(id)arg1 prefetchQueue:(id)arg2 ;
-(id)fetchAndRetain:(int*)arg1 ;
-(NSURL *)URL;
-(id)archive:(int*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTag:(id)arg1 URL:(id)arg2 ;
-(void)dealloc;
@end

