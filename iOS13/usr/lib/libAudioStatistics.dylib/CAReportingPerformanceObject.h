/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAudioStatistics.dylib
*/


#import <libAudioStatistics.dylib/libAudioStatistics.dylib-Structs.h>
@class NSDictionary, NSString, NSArray;

@interface CAReportingPerformanceObject : NSObject {

	unsigned short _serviceType;
	NSDictionary* _performanceMetrics;
	NSDictionary* _configuration;
	NSString* _perfDataPath;
	NSString* _perfDataName;
	pc_sessionRef _session;
	NSArray* _processIdentifiers;

}

@property (retain) NSString * perfDataPath;                                    //@synthesize perfDataPath=_perfDataPath - In the implementation block
@property (retain) NSString * perfDataName;                                    //@synthesize perfDataName=_perfDataName - In the implementation block
@property (assign) pc_sessionRef session;                                      //@synthesize session=_session - In the implementation block
@property (retain) NSArray * processIdentifiers;                               //@synthesize processIdentifiers=_processIdentifiers - In the implementation block
@property (nonatomic,readonly) NSDictionary * performanceMetrics;              //@synthesize performanceMetrics=_performanceMetrics - In the implementation block
@property (assign,nonatomic) unsigned short serviceType;                       //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSDictionary * configuration;                     //@synthesize configuration=_configuration - In the implementation block
-(void)begin;
-(unsigned short)serviceType;
-(pc_sessionRef)session;
-(void)setSession:(pc_sessionRef)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(void)setServiceType:(unsigned short)arg1 ;
-(NSDictionary *)performanceMetrics;
-(id)initWithProcessIdentifiers:(id)arg1 ;
-(id)endAndReturnPerformanceMetrics;
-(NSString *)perfDataPath;
-(void)setPerfDataPath:(NSString *)arg1 ;
-(NSString *)perfDataName;
-(void)setPerfDataName:(NSString *)arg1 ;
-(NSArray *)processIdentifiers;
-(void)setProcessIdentifiers:(NSArray *)arg1 ;
@end

