/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFResponse.h>

@class NSArray;

@interface WFFavoriteLocationResponse : WFResponse {

	NSArray* _favoriteLocations;

}

@property (nonatomic,readonly) NSArray * favoriteLocations;              //@synthesize favoriteLocations=_favoriteLocations - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)favoriteLocations;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 favorites:(id)arg2 ;
@end

