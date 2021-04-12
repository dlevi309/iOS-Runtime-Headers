/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CLLocation *)center;
-(void)setCenter:(CLLocation *)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)locations;
@end

