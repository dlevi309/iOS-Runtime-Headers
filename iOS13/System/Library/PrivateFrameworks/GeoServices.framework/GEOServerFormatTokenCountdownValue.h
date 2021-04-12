/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

