/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


@class NSString, NSDate;

@interface HAENGeoLocation : NSObject {

	unsigned source;
	unsigned sourceDevice;
	NSString* countryCode;
	NSDate* timestamp;

}

@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) unsigned source; 
@property (nonatomic,readonly) unsigned sourceDevice; 
@property (nonatomic,readonly) NSDate * timestamp; 
-(NSString *)countryCode;
-(id)init;
-(unsigned)sourceDevice;
-(NSDate *)timestamp;
-(id)description;
-(unsigned)source;
-(void)fetchGeoLocation;
-(id)describeSource;
@end

