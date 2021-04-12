/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoImpressionThresholdProviding.h>

@class NSString;

@interface SVVideoImpressionThresholdProvider : NSObject <SVVideoImpressionThresholdProviding> {

	double _impressionThreshold;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double impressionThreshold;              //@synthesize impressionThreshold=_impressionThreshold - In the implementation block
-(double)impressionThreshold;
-(id)initWithImpressionThreshold:(double)arg1 ;
@end

