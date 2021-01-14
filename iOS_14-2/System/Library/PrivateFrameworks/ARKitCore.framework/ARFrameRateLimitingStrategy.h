/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARTechniqueForwardingStrategy.h>

@class ARCircularArray, NSString;

@interface ARFrameRateLimitingStrategy : NSObject <ARTechniqueForwardingStrategy> {

	long long _frameRate;
	ARCircularArray* _mostRecentTimestamps;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrameRate:(long long)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldProcessData:(id)arg1 ;
-(BOOL)shouldRequestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
@end

