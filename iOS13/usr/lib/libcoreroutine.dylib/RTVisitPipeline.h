/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSArray, NSMutableDictionary, RTVisitHyperParameter, NSString, RTVisit, NSDate;

@interface RTVisitPipeline : NSObject {

	NSArray* _modules;
	NSMutableDictionary* _moduleStats;
	unsigned long long _iteration;
	RTVisitHyperParameter* _hyperParameter;
	BOOL _bootStrappingDone;
	NSString* _name;
	unsigned long long _type;
	RTVisit* _lastVisit;
	NSDate* _lastProcessedLocationDate;

}

@property (nonatomic,retain) NSDate * lastProcessedLocationDate;              //@synthesize lastProcessedLocationDate=_lastProcessedLocationDate - In the implementation block
@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) RTVisit * lastVisit;                           //@synthesize lastVisit=_lastVisit - In the implementation block
@property (assign,nonatomic) BOOL bootStrappingDone;                          //@synthesize bootStrappingDone=_bootStrappingDone - In the implementation block
+(id)typeToString:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned long long)type;
-(RTVisit *)lastVisit;
-(id)initWithModules:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 lastVisit:(id)arg4 hyperParameter:(id)arg5 ;
-(id)filterLocations:(id)arg1 ;
-(id)processVisitCluster:(id)arg1 ;
-(id)filterVisit:(id)arg1 ;
-(id)processLocations:(id)arg1 ;
-(BOOL)bootStrappingDone;
-(void)setBootStrappingDone:(BOOL)arg1 ;
-(NSDate *)lastProcessedLocationDate;
-(void)setLastProcessedLocationDate:(NSDate *)arg1 ;
@end

