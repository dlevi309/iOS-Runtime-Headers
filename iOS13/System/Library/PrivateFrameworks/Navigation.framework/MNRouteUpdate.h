/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocation *)origin;
-(void)setOrigin:(CLLocation *)arg1 ;
-(NSDate *)requestTime;
-(void)setRequestTime:(NSDate *)arg1 ;
-(NSArray *)routes;
-(void)setRoutes:(NSArray *)arg1 ;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(double)aggressiveTravelTime;
-(double)conservativeTravelTime;
-(void)setAggressiveTravelTime:(double)arg1 ;
-(void)setConservativeTravelTime:(double)arg1 ;
-(id)jsonDictionary;
-(id)copyWithOptions:(long long)arg1 ;
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

