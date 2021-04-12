/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface SUManagedDeviceUpdateDelay : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isDelayed;
	NSDate* _delayedStartDate;
	unsigned long long _delayPeriod;

}

@property (assign,nonatomic) BOOL isDelayed;                              //@synthesize isDelayed=_isDelayed - In the implementation block
@property (nonatomic,retain) NSDate * delayedStartDate;                   //@synthesize delayedStartDate=_delayedStartDate - In the implementation block
@property (assign,nonatomic) unsigned long long delayPeriod;              //@synthesize delayPeriod=_delayPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isDelayed;
-(void)setIsDelayed:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelayPeriod:(unsigned long long)arg1 ;
-(unsigned long long)delayPeriod;
-(id)initWithDelay:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSDate *)delayedStartDate;
-(unsigned long long)delayUnit;
-(id)delayEndDate;
-(void)setDelayedStartDate:(NSDate *)arg1 ;
@end

