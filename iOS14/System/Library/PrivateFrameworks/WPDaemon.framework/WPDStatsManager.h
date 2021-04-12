/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSMutableArray, NSObject, WPDaemonServer;

@interface WPDStatsManager : NSObject {

	BOOL _PLLogAvailable;
	NSString* _name;
	NSDictionary* _scanArray;
	NSMutableArray* _regularScanArray;
	NSMutableArray* _aggressiveScanArray;
	NSMutableArray* _advertisingArray;
	unsigned long long* _resetScanArray;
	unsigned long long* _resetAdvertisingArray;
	NSObject*<OS_dispatch_queue> _reportQueue;
	double _nextPushTime;
	WPDaemonServer* _server;

}

@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * scanArray;                              //@synthesize scanArray=_scanArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * regularScanArray;                     //@synthesize regularScanArray=_regularScanArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * aggressiveScanArray;                  //@synthesize aggressiveScanArray=_aggressiveScanArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * advertisingArray;                     //@synthesize advertisingArray=_advertisingArray - In the implementation block
@property (assign) unsigned long long* resetScanArray;                              //@synthesize resetScanArray=_resetScanArray - In the implementation block
@property (assign) unsigned long long* resetAdvertisingArray;                       //@synthesize resetAdvertisingArray=_resetAdvertisingArray - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reportQueue;              //@synthesize reportQueue=_reportQueue - In the implementation block
@property (assign,nonatomic) double nextPushTime;                                   //@synthesize nextPushTime=_nextPushTime - In the implementation block
@property (nonatomic,readonly) BOOL PLLogAvailable;                                 //@synthesize PLLogAvailable=_PLLogAvailable - In the implementation block
@property (__weak,readonly) WPDaemonServer * server;                                //@synthesize server=_server - In the implementation block
+(id)getStringFromActivity:(unsigned long long)arg1 ;
-(id)generateStateDump;
-(void)setNextPushTime:(double)arg1 ;
-(void)setReportQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAdvertisingArray:(NSMutableArray *)arg1 ;
-(void)stopActivity:(unsigned long long)arg1 ;
-(void)resetActivityAsync:(unsigned long long)arg1 forType:(unsigned char)arg2 ;
-(NSMutableArray *)regularScanArray;
-(NSMutableArray *)aggressiveScanArray;
-(unsigned long long*)resetScanArray;
-(id)initWithServer:(id)arg1 ;
-(void)stopActivityAsync:(unsigned long long)arg1 forType:(unsigned char)arg2 ;
-(void)setRegularScanArray:(NSMutableArray *)arg1 ;
-(void)reportPLStats;
-(NSString *)name;
-(id)description;
-(void)setResetScanArray:(unsigned long long*)arg1 ;
-(void)startActivityAsync:(unsigned long long)arg1 forType:(unsigned char)arg2 scanRate:(long long)arg3 ;
-(WPDaemonServer *)server;
-(void)resetActivity:(unsigned long long)arg1 forType:(unsigned char)arg2 ;
-(void)stopActivity:(unsigned long long)arg1 forType:(unsigned char)arg2 ;
-(void)startActivityAsync:(unsigned long long)arg1 forType:(unsigned char)arg2 ;
-(NSObject*<OS_dispatch_queue>)reportQueue;
-(NSMutableArray *)advertisingArray;
-(BOOL)PLLogAvailable;
-(void)startActivity:(unsigned long long)arg1 forType:(unsigned char)arg2 scanRate:(long long)arg3 ;
-(void)startActivity:(unsigned long long)arg1 forType:(unsigned char)arg2 ;
-(id)getStatsDictionary;
-(void)setAggressiveScanArray:(NSMutableArray *)arg1 ;
-(void)setResetAdvertisingArray:(unsigned long long*)arg1 ;
-(NSDictionary *)scanArray;
-(void)setScanArray:(NSDictionary *)arg1 ;
-(void)stopActivityAsync:(unsigned long long)arg1 ;
-(unsigned long long*)resetAdvertisingArray;
-(double)nextPushTime;
-(void)dealloc;
@end

