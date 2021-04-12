/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSArray;


@protocol GEOSurchargeOption
@property (nonatomic,readonly) NSArray * surchargeTypes; 
@property (nonatomic,readonly) unsigned long long selectedSurchargeTypeIndex; 
@property (nonatomic,readonly) id<GEOSurchargeType> selectedSurchargeType; 
@required
-(NSArray *)surchargeTypes;
-(unsigned long long)selectedSurchargeTypeIndex;
-(id<GEOSurchargeType>)selectedSurchargeType;

@end

