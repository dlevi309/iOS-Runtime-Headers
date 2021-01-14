/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary;

@interface VCImageConverterBase : NSObject {

	CVPixelBufferPoolRef _bufferPool;
	NSMutableDictionary* _bufferPoolDictionary;

}
-(void)dealloc;
-(BOOL)setUpBufferPoolForOutputWidth:(unsigned long long)arg1 outputHeight:(unsigned long long)arg2 ;
-(id)initWithFormatType:(unsigned)arg1 ;
-(BOOL)ensureBufferPoolSupportsOutputWidth:(unsigned long long)arg1 outputHeight:(unsigned long long)arg2 ;
@end

