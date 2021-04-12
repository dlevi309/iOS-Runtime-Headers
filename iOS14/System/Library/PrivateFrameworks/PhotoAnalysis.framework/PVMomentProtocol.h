/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

@class NSString, NSDate;


@protocol PVMomentProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@property (nonatomic,readonly) CLLocationCoordinate2D approximateCoordinate; 
@property (nonatomic,readonly) BOOL isCoarse; 
@required
-(NSString *)localIdentifier;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(BOOL)isCoarse;
-(unsigned long long)estimatedAssetCount;
-(CLLocationCoordinate2D)approximateCoordinate;

@end

