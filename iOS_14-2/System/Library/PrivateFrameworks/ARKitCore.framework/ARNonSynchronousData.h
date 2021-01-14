/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARResultData.h>

@class NSArray, NSString;

@interface ARNonSynchronousData : NSObject <ARResultData> {

	NSArray* _gatheredData;
	double _timestamp;

}

@property (retain) NSArray * gatheredData;                          //@synthesize gatheredData=_gatheredData - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)resultDataOfClass:(Class)arg1 ;
-(id)initWithGatheredData:(id)arg1 timestamp:(double)arg2 ;
-(NSArray *)gatheredData;
-(void)setGatheredData:(NSArray *)arg1 ;
@end

