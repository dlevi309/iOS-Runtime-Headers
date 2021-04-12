/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface AR3DSkeletonDetectionResults : NSObject <ARResultData, NSCopying> {

	NSArray* _detectedSkeletons;
	double _timestamp;

}

@property (nonatomic,copy) NSArray * detectedSkeletons;              //@synthesize detectedSkeletons=_detectedSkeletons - In the implementation block
@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSArray *)detectedSkeletons;
-(void)setDetectedSkeletons:(NSArray *)arg1 ;
@end

