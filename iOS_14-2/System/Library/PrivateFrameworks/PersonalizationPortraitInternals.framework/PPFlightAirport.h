/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString;

@interface PPFlightAirport : NSObject {

	unsigned char _role;
	NSString* _name;
	NSString* _iataCode;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * iataCode;              //@synthesize iataCode=_iataCode - In the implementation block
@property (nonatomic,readonly) unsigned char role;               //@synthesize role=_role - In the implementation block
-(NSString *)iataCode;
-(NSString *)name;
-(unsigned char)role;
-(id)initWithName:(id)arg1 iataCode:(id)arg2 role:(unsigned char)arg3 ;
-(BOOL)isEqualToPPFlightAirport:(id)arg1 ;
@end

