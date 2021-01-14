/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableData, NSData, NSString;

@interface HMIDESMutableFloatArray : HMFObject <HMFLogging, NSCopying> {

	NSMutableData* _data;

}

@property (nonatomic,retain,readonly) NSData * data; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) const float* floats; 
@property (nonatomic,readonly) float* mutableFloats; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)scale:(float)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(const float*)floats;
-(float)l2Norm;
-(NSData *)data;
-(void)appendArray:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)add:(id)arg1 ;
-(id)initWithFloats:(const float*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDataTensor:(id)arg1 ;
-(void)subtract:(id)arg1 ;
-(id)floatArrayByScaling:(float)arg1 ;
-(void)appendFloats:(const float*)arg1 count:(unsigned long long)arg2 ;
-(float*)mutableFloats;
-(void)fillWithFloat:(float)arg1 ;
-(id)floatArrayByAdding:(id)arg1 ;
-(id)floatArrayBySubtracting:(id)arg1 ;
@end

