/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface UARPUpdateFirmwareAnalyticsEventFrameworkParams : NSObject <NSSecureCoding> {

	NSNumber* _stagingUserInitiated;
	NSNumber* _stagingDuration;
	NSNumber* _stagingIterations;
	NSNumber* _stagingStatus;
	NSNumber* _stagingVendorError;
	NSNumber* _applyUserInitiated;
	NSNumber* _applyDuration;
	NSNumber* _applyStatus;
	NSNumber* _applyVendorError;

}

@property (retain) NSNumber * stagingUserInitiated;              //@synthesize stagingUserInitiated=_stagingUserInitiated - In the implementation block
@property (retain) NSNumber * stagingDuration;                   //@synthesize stagingDuration=_stagingDuration - In the implementation block
@property (retain) NSNumber * stagingIterations;                 //@synthesize stagingIterations=_stagingIterations - In the implementation block
@property (retain) NSNumber * stagingStatus;                     //@synthesize stagingStatus=_stagingStatus - In the implementation block
@property (retain) NSNumber * stagingVendorError;                //@synthesize stagingVendorError=_stagingVendorError - In the implementation block
@property (retain) NSNumber * applyUserInitiated;                //@synthesize applyUserInitiated=_applyUserInitiated - In the implementation block
@property (retain) NSNumber * applyDuration;                     //@synthesize applyDuration=_applyDuration - In the implementation block
@property (retain) NSNumber * applyStatus;                       //@synthesize applyStatus=_applyStatus - In the implementation block
@property (retain) NSNumber * applyVendorError;                  //@synthesize applyVendorError=_applyVendorError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)stagingUserInitiated;
-(NSNumber *)stagingDuration;
-(NSNumber *)stagingIterations;
-(NSNumber *)stagingStatus;
-(NSNumber *)stagingVendorError;
-(NSNumber *)applyUserInitiated;
-(NSNumber *)applyDuration;
-(NSNumber *)applyStatus;
-(NSNumber *)applyVendorError;
-(void)setStagingUserInitiated:(NSNumber *)arg1 ;
-(void)setStagingDuration:(NSNumber *)arg1 ;
-(void)setStagingIterations:(NSNumber *)arg1 ;
-(void)setStagingStatus:(NSNumber *)arg1 ;
-(void)setStagingVendorError:(NSNumber *)arg1 ;
-(void)setApplyUserInitiated:(NSNumber *)arg1 ;
-(void)setApplyDuration:(NSNumber *)arg1 ;
-(void)setApplyStatus:(NSNumber *)arg1 ;
-(void)setApplyVendorError:(NSNumber *)arg1 ;
@end

