/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

@class CLLocation, CLHeading;


@protocol CAMMutableCaptureRequestLocation <NSObject>
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLHeading * heading; 
@required
-(CLLocation *)location;
-(CLHeading *)heading;
-(void)setHeading:(id)arg1;
-(void)setLocation:(id)arg1;

@end

