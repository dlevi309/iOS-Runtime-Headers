/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(pc_sessionRef)session;
-(id)endAndReturnPerformanceMetrics;
-(void)setServiceType:(unsigned short)arg1 ;
-(void)setProcessIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)performanceMetrics;
-(NSDictionary *)configuration;
-(void)setSession:(pc_sessionRef)arg1 ;
-(NSString *)perfDataName;
-(NSArray *)processIdentifiers;
-(void)setPerfDataName:(NSString *)arg1 ;
-(void)setPerfDataPath:(NSString *)arg1 ;
-(id)initWithProcessIdentifiers:(id)arg1 ;
-(unsigned short)serviceType;
-(NSString *)perfDataPath;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

