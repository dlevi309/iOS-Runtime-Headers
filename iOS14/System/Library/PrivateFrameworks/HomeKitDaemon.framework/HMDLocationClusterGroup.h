/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class CLLocation, NSMutableArray;

@interface HMDLocationClusterGroup : NSObject {

	CLLocation* _center;
	NSMutableArray* _locations;

}

@property (nonatomic,retain) CLLocation * center;                     //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)groupWithCenter:(id)arg1 ;
-(NSMutableArray *)locations;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(CLLocation *)center;
-(void)setCenter:(CLLocation *)arg1 ;
@end

