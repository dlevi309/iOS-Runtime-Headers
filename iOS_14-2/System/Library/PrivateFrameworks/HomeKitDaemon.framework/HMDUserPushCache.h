/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSDate;

@interface HMDUserPushCache : HMFObject {

	HMDDevice* _device;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) HMDDevice * device;                         //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
-(id)initWithDevice:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)init;
-(HMDDevice *)device;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
@end

