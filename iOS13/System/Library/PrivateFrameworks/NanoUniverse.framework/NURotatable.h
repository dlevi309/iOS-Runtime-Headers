/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
*/


@protocol NURotatable <NSObject>
@property (assign,nonatomic) CLLocationCoordinate2D homeCoordinate; 
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate; 
@required
-(CLLocationCoordinate2D)centerCoordinate;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 animated:(BOOL)arg2;
-(CLLocationCoordinate2D)homeCoordinate;
-(void)setHomeCoordinate:(CLLocationCoordinate2D)arg1;

@end

