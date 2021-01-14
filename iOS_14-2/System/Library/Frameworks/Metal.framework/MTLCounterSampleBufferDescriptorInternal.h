/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLCounterSampleBufferDescriptor.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTLCounterSet;
@class NSString;

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying> {

	id<MTLCounterSet> _counterSet;
	unsigned long long _storageMode;
	NSString* _label;
	unsigned long long _sampleCount;

}
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)setCounterSet:(id)arg1 ;
-(id)counterSet;
-(unsigned long long)storageMode;
-(unsigned long long)sampleCount;
-(unsigned long long)hash;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

