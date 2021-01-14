/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/


@class NSString, NSMutableArray, NSMutableDictionary, NSArray;

@interface OSAReport : NSObject {

	NSString* _incidentID;
	NSString* _logType;
	double _capture_time;
	NSMutableArray* _notes;
	NSMutableDictionary* _logWritingOptions;
	NSString* _logfile;

}

@property (nonatomic,readonly) double capture_time;              //@synthesize capture_time=_capture_time - In the implementation block
@property (nonatomic,readonly) NSArray * notes;                  //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSString * logfile;               //@synthesize logfile=_logfile - In the implementation block
+(id)bootArgs;
+(id)kernelVersionDescription;
+(id)systemIDWithDescription:(BOOL)arg1 ;
+(unsigned char)executeWithTimeout:(unsigned)arg1 Code:(/*^block*/id)arg2 ;
-(NSArray *)notes;
-(id)init;
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)additionalIPSMetadata;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)appleCareDetails;
-(BOOL)isActionable;
-(id)problemType;
-(void)alignIncident:(id)arg1 at:(double)arg2 ;
-(double)captureTime;
-(double)capture_time;
-(id)incidentID;
-(id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2 ;
-(BOOL)saveWithOptions:(id)arg1 ;
-(NSString *)logfile;
-(BOOL)isAppleTV;
-(id)reportNamePrefix;
-(void)symlink:(id)arg1 ;
-(BOOL)secondChanceToSylog;
@end

