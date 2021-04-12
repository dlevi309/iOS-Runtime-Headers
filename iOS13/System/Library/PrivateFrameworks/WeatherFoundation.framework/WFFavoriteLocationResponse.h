/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFResponse.h>

@class NSArray;

@interface WFFavoriteLocationResponse : WFResponse {

	NSArray* _favoriteLocations;

}

@property (nonatomic,readonly) NSArray * favoriteLocations;              //@synthesize favoriteLocations=_favoriteLocations - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)favoriteLocations;
-(id)initWithIdentifier:(id)arg1 favorites:(id)arg2 ;
@end

