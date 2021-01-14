/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

@class CLLocation;


@protocol TSLocationDetectionManagerType
@property (readonly,nonatomic) BOOL locationServicesEnabled; 
@property (readonly,nonatomic) BOOL authorized; 
@property (readonly,nonatomic) CLLocation * mostFrequentLocation; 
@property (readonly,nonatomic) id observableMostFrequentLocation; 
@required
-(BOOL)authorized;
-(CLLocation *)mostFrequentLocation;
-(id)observableMostFrequentLocation;
-(BOOL)locationServicesEnabled;

@end

