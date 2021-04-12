/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARTechniqueForwardingStrategy.h>

@class ARCircularArray, NSString;

@interface ARFrameRateLimitingStrategy : NSObject <ARTechniqueForwardingStrategy> {

	long long _frameRate;
	ARCircularArray* _mostRecentTimestamps;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(BOOL)shouldProcessData:(id)arg1 ;
-(BOOL)shouldRequestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(id)initWithFrameRate:(long long)arg1 ;
@end

