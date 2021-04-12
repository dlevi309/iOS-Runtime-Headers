/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(double)latitude;
-(double)longitude;
-(NSString *)iata;
-(NSString *)isoLanguage;
@end

