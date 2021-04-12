/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)totalDiskCapacity;
-(void)setTotalSystemCapacity:(NSNumber *)arg1 ;
-(void)setTotalSystemAvailable:(NSNumber *)arg1 ;
-(void)setTotalDataCapacity:(NSNumber *)arg1 ;
-(void)setTotalDataAvailable:(NSNumber *)arg1 ;
-(void)setTotalDiskCapacity:(NSNumber *)arg1 ;
-(NSNumber *)totalSystemCapacity;
-(NSNumber *)totalSystemAvailable;
-(NSNumber *)totalDataCapacity;
-(NSNumber *)totalDataAvailable;
@end

