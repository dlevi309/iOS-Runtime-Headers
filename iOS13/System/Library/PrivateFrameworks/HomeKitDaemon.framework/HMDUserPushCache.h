/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(HMDDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isExpired;
@end

