/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString;

@interface GEOTrafficAndETAResult : NSObject {

	BOOL _isSuccess;
	double _seconds;
	double _aggressiveTravelTime;
	double _conservativeTravelTime;
	NSString* _shortTrafficString;
	NSString* _longTrafficString;

}

@property (assign,nonatomic) BOOL isSuccess;                             //@synthesize isSuccess=_isSuccess - In the implementation block
@property (assign,nonatomic) double seconds;                             //@synthesize seconds=_seconds - In the implementation block
@property (assign,nonatomic) double aggressiveTravelTime;                //@synthesize aggressiveTravelTime=_aggressiveTravelTime - In the implementation block
@property (assign,nonatomic) double conservativeTravelTime;              //@synthesize conservativeTravelTime=_conservativeTravelTime - In the implementation block
@property (nonatomic,copy) NSString * shortTrafficString;                //@synthesize shortTrafficString=_shortTrafficString - In the implementation block
@property (nonatomic,copy) NSString * longTrafficString;                 //@synthesize longTrafficString=_longTrafficString - In the implementation block
-(double)seconds;
-(double)aggressiveTravelTime;
-(void)setSeconds:(double)arg1 ;
-(double)conservativeTravelTime;
-(BOOL)isSuccess;
-(void)setIsSuccess:(BOOL)arg1 ;
-(void)setAggressiveTravelTime:(double)arg1 ;
-(void)setConservativeTravelTime:(double)arg1 ;
-(NSString *)shortTrafficString;
-(void)setShortTrafficString:(NSString *)arg1 ;
-(NSString *)longTrafficString;
-(void)setLongTrafficString:(NSString *)arg1 ;
@end

