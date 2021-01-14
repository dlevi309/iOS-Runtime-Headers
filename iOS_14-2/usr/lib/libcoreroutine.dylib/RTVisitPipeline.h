/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSArray, NSMutableDictionary, NSString, RTVisit, RTVisitHyperParameter, NSDate;

@interface RTVisitPipeline : NSObject {

	NSArray* _modules;
	NSMutableDictionary* _moduleStats;
	unsigned long long _iteration;
	BOOL _bootStrappingDone;
	NSString* _name;
	unsigned long long _type;
	RTVisit* _lastVisit;
	RTVisitHyperParameter* _hyperParameter;
	NSDate* _lastProcessedLocationDate;

}

@property (nonatomic,retain) NSDate * lastProcessedLocationDate;                    //@synthesize lastProcessedLocationDate=_lastProcessedLocationDate - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) RTVisit * lastVisit;                                 //@synthesize lastVisit=_lastVisit - In the implementation block
@property (assign,nonatomic) BOOL bootStrappingDone;                                //@synthesize bootStrappingDone=_bootStrappingDone - In the implementation block
@property (nonatomic,readonly) RTVisitHyperParameter * hyperParameter;              //@synthesize hyperParameter=_hyperParameter - In the implementation block
+(id)typeToString:(unsigned long long)arg1 ;
-(id)filterLocations:(id)arg1 ;
-(id)initWithModules:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 lastVisit:(id)arg4 hyperParameter:(id)arg5 ;
-(BOOL)bootStrappingDone;
-(void)shutdown;
-(id)init;
-(id)processVisitCluster:(id)arg1 ;
-(RTVisit *)lastVisit;
-(void)setBootStrappingDone:(BOOL)arg1 ;
-(NSString *)name;
-(id)description;
-(id)processLocations:(id)arg1 ;
-(unsigned long long)type;
-(id)filterVisitClusters:(id)arg1 ;
-(void)setLastProcessedLocationDate:(NSDate *)arg1 ;
-(NSDate *)lastProcessedLocationDate;
-(BOOL)isRedundantForVisit:(id)arg1 currentVisit:(id)arg2 distanceCalculator:(id)arg3 ;
-(RTVisitHyperParameter *)hyperParameter;
@end

