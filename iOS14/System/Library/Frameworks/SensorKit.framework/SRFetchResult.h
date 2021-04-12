/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary;

@interface SRFetchResult : NSObject <NSCopying> {

	double _timestamp;
	NSData* _sampleData;
	NSDictionary* _metadata;
	Class _sampleClass;

}

@property (retain) NSData * sampleData;                  //@synthesize sampleData=_sampleData - In the implementation block
@property (retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (retain) Class sampleClass;                    //@synthesize sampleClass=_sampleClass - In the implementation block
@property (copy,readonly) id sample; 
@property (readonly) double timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
+(id)new;
+(void)initialize;
-(id)sample;
-(id)init;
-(double)timestamp;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setSampleClass:(Class)arg1 ;
-(Class)sampleClass;
-(id)initWithData:(id)arg1 timestamp:(double)arg2 metadata:(id)arg3 sampleClass:(Class)arg4 ;
-(void)setSampleData:(NSData *)arg1 ;
-(NSData *)sampleData;
@end

