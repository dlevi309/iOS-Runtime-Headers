/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWDeferredDataIntermediate.h>

@class NSArray;

@interface BWDeferredArrayIntermediate : BWDeferredDataIntermediate {

	NSArray* _array;

}
+(BOOL)supportsSecureCoding;
-(int)flush;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithArray:(id)arg1 tag:(id)arg2 URL:(id)arg3 ;
-(int)setURL:(id)arg1 prefetchQueue:(id)arg2 ;
-(int)setArchive:(id)arg1 ;
-(id)fetchWithCustomClassesAndRetain:(id)arg1 err:(int*)arg2 ;
-(id)archive:(int*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

