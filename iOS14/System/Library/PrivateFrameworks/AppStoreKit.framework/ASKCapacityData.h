/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@class NSNumber;

@interface ASKCapacityData : NSObject {

	NSNumber* _totalSystemCapacity;
	NSNumber* _totalSystemAvailable;
	NSNumber* _totalDataCapacity;
	NSNumber* _totalDataAvailable;
	NSNumber* _totalDiskCapacity;

}

@property (nonatomic,retain) NSNumber * totalSystemCapacity;               //@synthesize totalSystemCapacity=_totalSystemCapacity - In the implementation block
@property (nonatomic,retain) NSNumber * totalSystemAvailable;              //@synthesize totalSystemAvailable=_totalSystemAvailable - In the implementation block
@property (nonatomic,retain) NSNumber * totalDataCapacity;                 //@synthesize totalDataCapacity=_totalDataCapacity - In the implementation block
@property (nonatomic,retain) NSNumber * totalDataAvailable;                //@synthesize totalDataAvailable=_totalDataAvailable - In the implementation block
@property (nonatomic,retain) NSNumber * totalDiskCapacity;                 //@synthesize totalDiskCapacity=_totalDiskCapacity - In the implementation block
-(id)init;
-(void)setTotalDataAvailable:(NSNumber *)arg1 ;
-(NSNumber *)totalSystemAvailable;
-(void)setTotalDataCapacity:(NSNumber *)arg1 ;
-(NSNumber *)totalDataCapacity;
-(void)setTotalSystemCapacity:(NSNumber *)arg1 ;
-(NSNumber *)totalDiskCapacity;
-(NSNumber *)totalDataAvailable;
-(NSNumber *)totalSystemCapacity;
-(void)setTotalDiskCapacity:(NSNumber *)arg1 ;
-(void)setTotalSystemAvailable:(NSNumber *)arg1 ;
@end

