/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAnalyticsSignificantTimeEventData : HMFObject {

	BOOL _offsetPresent;
	NSString* _significantEvent;

}

@property (nonatomic,copy) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (assign) BOOL offsetPresent;                               //@synthesize offsetPresent=_offsetPresent - In the implementation block
-(void)setSignificantEvent:(NSString *)arg1 ;
-(NSString *)significantEvent;
-(void)setOffsetPresent:(BOOL)arg1 ;
-(BOOL)offsetPresent;
@end

