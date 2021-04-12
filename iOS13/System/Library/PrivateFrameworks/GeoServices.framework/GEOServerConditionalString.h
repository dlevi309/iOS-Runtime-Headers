/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOServerConditionalString <NSObject,NSCoding>
@property (nonatomic,readonly) id<GEOServerFormattedString> formattedString; 
@property (nonatomic,readonly) id<GEOServerCondition> condition; 
@required
-(id<GEOServerCondition>)condition;
-(id<GEOServerFormattedString>)formattedString;

@end

