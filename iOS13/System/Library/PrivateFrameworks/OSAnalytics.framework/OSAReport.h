/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,readonly) NSArray * notes;                 //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSString * logfile;              //@synthesize logfile=_logfile - In the implementation block
+(unsigned char)executeWithTimeout:(unsigned)arg1 Code:(/*^block*/id)arg2 ;
+(id)kernelVersionDescription;
+(id)systemIDWithDescription:(BOOL)arg1 ;
+(id)bootArgs;
-(id)init;
-(id)problemType;
-(NSArray *)notes;
-(BOOL)isAppleTV;
-(id)incidentID;
-(BOOL)isActionable;
-(id)appleCareDetails;
-(id)reportNamePrefix;
-(void)generateLogAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(int)streamContentAtLevel:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)saveWithOptions:(id)arg1 ;
-(id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2 ;
-(id)additionalIPSMetadata;
-(BOOL)secondChanceToSylog;
-(void)alignIncident:(id)arg1 at:(double)arg2 ;
-(double)captureTime;
-(void)symlink:(id)arg1 ;
-(NSString *)logfile;
@end

