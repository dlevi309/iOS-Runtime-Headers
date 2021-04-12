/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

@class NSString, NSDate;


@protocol PVMomentProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@property (nonatomic,readonly) CLLocationCoordinate2D approximateCoordinate; 
@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)localIdentifier;
-(unsigned long long)estimatedAssetCount;
-(CLLocationCoordinate2D)approximateCoordinate;

@end

