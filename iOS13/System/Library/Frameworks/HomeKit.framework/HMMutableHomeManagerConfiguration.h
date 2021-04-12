/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMHomeManagerConfiguration.h>

@protocol HMFLocking;
@class HMFLocationAuthorization, NSOperationQueue;

@interface HMMutableHomeManagerConfiguration : HMHomeManagerConfiguration {

	id<HMFLocking> _lock;

}

@property (retain) HMFLocationAuthorization * locationAuthorization; 
@property (assign) unsigned long long cachePolicy; 
@property (assign) unsigned long long options; 
@property (getter=isDiscretionary) BOOL discretionary; 
@property (retain) NSOperationQueue * delegateQueue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setDiscretionary:(BOOL)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2 ;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)delegateQueue;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(BOOL)isDiscretionary;
-(unsigned long long)cachePolicy;
-(HMFLocationAuthorization *)locationAuthorization;
-(void)setLocationAuthorization:(HMFLocationAuthorization *)arg1 ;
-(BOOL)shouldConnect;
@end

