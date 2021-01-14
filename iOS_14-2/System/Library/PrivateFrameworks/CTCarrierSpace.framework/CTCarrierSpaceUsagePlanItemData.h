/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpaceUsagePlanItemData : NSObject <NSSecureCoding> {

	long long _units;
	NSString* _capacity;
	NSString* _maxDataBeforeThrottling;
	NSString* _thisDeviceDataUsed;
	NSString* _sharedDataUsed;
	NSString* _sharedPlanIdentifier;

}

@property (assign,nonatomic) long long units;                                 //@synthesize units=_units - In the implementation block
@property (nonatomic,retain) NSString * capacity;                             //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,retain) NSString * maxDataBeforeThrottling;              //@synthesize maxDataBeforeThrottling=_maxDataBeforeThrottling - In the implementation block
@property (nonatomic,retain) NSString * thisDeviceDataUsed;                   //@synthesize thisDeviceDataUsed=_thisDeviceDataUsed - In the implementation block
@property (nonatomic,retain) NSString * sharedDataUsed;                       //@synthesize sharedDataUsed=_sharedDataUsed - In the implementation block
@property (nonatomic,retain) NSString * sharedPlanIdentifier;                 //@synthesize sharedPlanIdentifier=_sharedPlanIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)units;
-(void)setCapacity:(NSString *)arg1 ;
-(void)setUnits:(long long)arg1 ;
-(NSString *)sharedDataUsed;
-(void)setSharedPlanIdentifier:(NSString *)arg1 ;
-(void)setMaxDataBeforeThrottling:(NSString *)arg1 ;
-(id)init;
-(NSString *)sharedPlanIdentifier;
-(void)setThisDeviceDataUsed:(NSString *)arg1 ;
-(NSString *)thisDeviceDataUsed;
-(void)setSharedDataUsed:(NSString *)arg1 ;
-(NSString *)maxDataBeforeThrottling;
-(NSString *)capacity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

