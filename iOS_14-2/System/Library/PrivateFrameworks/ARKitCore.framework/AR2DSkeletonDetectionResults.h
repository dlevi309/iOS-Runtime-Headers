/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/AREspressoTensorResultData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface AR2DSkeletonDetectionResults : NSObject <AREspressoTensorResultData, NSCopying> {

	NSArray* _detectedSkeletons;
	double _timestamp;

}

@property (nonatomic,copy) NSArray * detectedSkeletons;              //@synthesize detectedSkeletons=_detectedSkeletons - In the implementation block
@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSArray *)detectedSkeletons;
-(void)setDetectedSkeletons:(NSArray *)arg1 ;
@end

