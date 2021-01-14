/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class NSString;

@interface ATXHeuristicAirportCity : NSObject {

	NSString* _iata;
	NSString* _name;
	NSString* _isoLanguage;
	double _latitude;
	double _longitude;

}

@property (nonatomic,readonly) NSString * iata;                     //@synthesize iata=_iata - In the implementation block
@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * isoLanguage;              //@synthesize isoLanguage=_isoLanguage - In the implementation block
@property (nonatomic,readonly) double latitude;                     //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                    //@synthesize longitude=_longitude - In the implementation block
+(id)supportedLanguages;
+(id)cityForAirport:(id)arg1 language:(id)arg2 ;
+(id)cityForAirport:(id)arg1 ;
-(double)latitude;
-(NSString *)iata;
-(double)longitude;
-(NSString *)name;
-(NSString *)isoLanguage;
@end

