/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=isAdaptive) BOOL adaptive; 
@property (retain) NSOperationQueue * delegateQueue; 
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)setLocationAuthorization:(HMFLocationAuthorization *)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2 ;
-(unsigned long long)options;
-(BOOL)isAdaptive;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)setAdaptive:(BOOL)arg1 ;
-(unsigned long long)cachePolicy;
-(NSOperationQueue *)delegateQueue;
-(HMFLocationAuthorization *)locationAuthorization;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(BOOL)shouldConnect;
-(BOOL)isDiscretionary;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

