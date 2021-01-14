/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNJSONOutput.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSArray, NSString, NSDate;

@interface MNRouteUpdate : NSObject <MNJSONOutput, NSSecureCoding, NSCopying> {

	CLLocation* _origin;
	double _travelTime;
	double _aggressiveTravelTime;
	double _conservativeTravelTime;
	NSArray* _routes;
	NSArray* _nonRecommendedRoutes;
	NSString* _routeSummary;
	NSString* _longRouteSummary;
	long long _travelMode;
	NSDate* _requestTime;
	NSString* _requestingClientID;

}

@property (nonatomic,retain) CLLocation * origin;                        //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) double travelTime;                          //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) double aggressiveTravelTime;                //@synthesize aggressiveTravelTime=_aggressiveTravelTime - In the implementation block
@property (assign,nonatomic) double conservativeTravelTime;              //@synthesize conservativeTravelTime=_conservativeTravelTime - In the implementation block
@property (nonatomic,copy) NSArray * routes;                             //@synthesize routes=_routes - In the implementation block
@property (nonatomic,copy) NSArray * nonRecommendedRoutes;               //@synthesize nonRecommendedRoutes=_nonRecommendedRoutes - In the implementation block
@property (nonatomic,copy) NSString * routeSummary;                      //@synthesize routeSummary=_routeSummary - In the implementation block
@property (nonatomic,copy) NSString * longRouteSummary;                  //@synthesize longRouteSummary=_longRouteSummary - In the implementation block
@property (assign,nonatomic) long long travelMode;                       //@synthesize travelMode=_travelMode - In the implementation block
@property (nonatomic,retain) NSDate * requestTime;                       //@synthesize requestTime=_requestTime - In the implementation block
@property (nonatomic,copy) NSString * requestingClientID;                //@synthesize requestingClientID=_requestingClientID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)conservativeTravelTime;
-(double)aggressiveTravelTime;
-(void)setOrigin:(CLLocation *)arg1 ;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(NSArray *)routes;
-(CLLocation *)origin;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRoutes:(NSArray *)arg1 ;
-(void)setAggressiveTravelTime:(double)arg1 ;
-(void)setConservativeTravelTime:(double)arg1 ;
-(NSString *)description;
-(NSDate *)requestTime;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithOptions:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequestTime:(NSDate *)arg1 ;
-(id)jsonDictionary;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRequestingClientID:(NSString *)arg1 ;
-(BOOL)satisfiesOptions:(long long)arg1 ;
-(BOOL)satisfiesFreshness:(id)arg1 fromLocation:(id)arg2 ;
-(NSString *)requestingClientID;
-(NSString *)routeSummary;
-(void)setRouteSummary:(NSString *)arg1 ;
-(NSString *)longRouteSummary;
-(void)setLongRouteSummary:(NSString *)arg1 ;
-(NSArray *)nonRecommendedRoutes;
-(void)setNonRecommendedRoutes:(NSArray *)arg1 ;
-(long long)travelMode;
-(void)setTravelMode:(long long)arg1 ;
@end

