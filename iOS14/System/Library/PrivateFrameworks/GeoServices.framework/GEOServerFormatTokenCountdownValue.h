/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSArray, NSDictionary, NSString;


@protocol GEOServerFormatTokenCountdownValue <NSObject,NSCoding>
@property (nonatomic,readonly) long long countdownType; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSDictionary * alternativeFormatStringsByType; 
@property (nonatomic,readonly) NSString * separator; 
@required
-(NSArray *)timestamps;
-(NSString *)separator;
-(long long)countdownType;
-(NSDictionary *)alternativeFormatStringsByType;

@end

