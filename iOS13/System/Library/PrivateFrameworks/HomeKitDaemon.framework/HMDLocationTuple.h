/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class CLLocation, NSDate;

@interface HMDLocationTuple : NSObject {

	CLLocation* _location;
	unsigned long long _numberOfReachableIPAccessory;
	unsigned long long _numberOfReachableBTLEAccessory;
	unsigned long long _numberOfreachableMediaAccessory;
	NSDate* _date;

}

@property (nonatomic,retain) CLLocation * location;                                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfReachableIPAccessory;                 //@synthesize numberOfReachableIPAccessory=_numberOfReachableIPAccessory - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfReachableBTLEAccessory;               //@synthesize numberOfReachableBTLEAccessory=_numberOfReachableBTLEAccessory - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfreachableMediaAccessory;              //@synthesize numberOfreachableMediaAccessory=_numberOfreachableMediaAccessory - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
+(id)tupleWithLocation:(id)arg1 reachableIPAccessory:(unsigned long long)arg2 reachableBTLEAccessory:(unsigned long long)arg3 reachableMediaAccessory:(unsigned long long)arg4 date:(id)arg5 ;
-(id)description;
-(NSDate *)date;
-(CLLocation *)location;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(unsigned long long)numberOfReachableIPAccessory;
-(unsigned long long)numberOfReachableBTLEAccessory;
-(void)setNumberOfReachableIPAccessory:(unsigned long long)arg1 ;
-(void)setNumberOfReachableBTLEAccessory:(unsigned long long)arg1 ;
-(void)setNumberOfreachableMediaAccessory:(unsigned long long)arg1 ;
-(unsigned long long)numberOfreachableMediaAccessory;
@end

