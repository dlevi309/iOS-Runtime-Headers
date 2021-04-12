/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <libobjc.A.dylib/ASCBackoff.h>

@class ASCExponentialBackoff, NSString;

@interface ASCJitterBackoff : NSObject <ASCBackoff> {

	ASCExponentialBackoff* _exponentialBackoff;

}

@property (nonatomic,readonly) ASCExponentialBackoff * exponentialBackoff;              //@synthesize exponentialBackoff=_exponentialBackoff - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(double)nextSleepTimeInterval;
-(id)initWithBaseSleepTimeInterval:(double)arg1 maxSleepTimeInterval:(double)arg2 ;
-(ASCExponentialBackoff *)exponentialBackoff;
@end

