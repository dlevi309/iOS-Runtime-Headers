/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSDate, NSArray;


@protocol GEOServerCondition <NSObject,NSCoding>
@property (nonatomic,readonly) long long conditionType; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) NSArray * subconditions; 
@required
-(long long)conditionType;
-(NSDate *)expirationDate;
-(NSArray *)subconditions;

@end

