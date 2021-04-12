/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSDictionary;

@interface WFNextHourPrecipitationDescription : NSObject <NSCopying> {

	NSDate* _validUntil;
	NSString* _shortTemplate;
	NSString* _longTemplate;
	NSDictionary* _parameters;

}

@property (nonatomic,copy) NSString * shortTemplate;                     //@synthesize shortTemplate=_shortTemplate - In the implementation block
@property (nonatomic,copy) NSString * longTemplate;                      //@synthesize longTemplate=_longTemplate - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription; 
@property (nonatomic,readonly) NSString * longDescription; 
@property (nonatomic,copy,readonly) NSDate * validUntil;                 //@synthesize validUntil=_validUntil - In the implementation block
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSString *)shortDescription;
-(NSString *)longDescription;
-(id)initWithShortTemplate:(id)arg1 longTemplate:(id)arg2 parameters:(id)arg3 validUntil:(id)arg4 ;
-(NSDate *)validUntil;
-(id)fillTemplate:(id)arg1 withDate:(id)arg2 ;
-(NSString *)shortTemplate;
-(void)setShortTemplate:(NSString *)arg1 ;
-(NSString *)longTemplate;
-(void)setLongTemplate:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValidAtDate:(id)arg1 ;
@end

