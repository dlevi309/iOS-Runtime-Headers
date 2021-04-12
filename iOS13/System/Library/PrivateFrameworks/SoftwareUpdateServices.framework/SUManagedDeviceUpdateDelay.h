/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
@class NSDate;

@interface SUManagedDeviceUpdateDelay : NSObject {

	BOOL _isDelayed;
	NSDate* _delayedStartDate;
	unsigned long long _delayPeriod;

}

@property (assign,nonatomic) BOOL isDelayed;                              //@synthesize isDelayed=_isDelayed - In the implementation block
@property (nonatomic,retain) NSDate * delayedStartDate;                   //@synthesize delayedStartDate=_delayedStartDate - In the implementation block
@property (assign,nonatomic) unsigned long long delayPeriod;              //@synthesize delayPeriod=_delayPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsDelayed:(BOOL)arg1 ;
-(BOOL)isDelayed;
-(unsigned long long)delayPeriod;
-(void)setDelayPeriod:(unsigned long long)arg1 ;
-(id)initWithDelay:(id)arg1 ;
-(NSDate *)delayedStartDate;
-(unsigned long long)delayUnit;
-(id)delayEndDate;
-(void)setDelayedStartDate:(NSDate *)arg1 ;
@end

