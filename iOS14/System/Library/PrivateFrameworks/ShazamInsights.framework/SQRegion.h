/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
*/


@class NSString, CLLocation;

@interface SQRegion : NSObject {

	long long _magnitude;
	NSString* _name;
	CLLocation* _location;
	NSString* _identifier;
	NSString* _countryCode;

}

@property (nonatomic,copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long magnitude;              //@synthesize magnitude=_magnitude - In the implementation block
+(id)regionWithIdentifier:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)name;
-(long long)magnitude;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

