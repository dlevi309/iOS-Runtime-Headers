/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSMutableArray, NSObject;

@interface WPDStatsManager : NSObject {

	NSString* _name;
	NSDictionary* _scanArray;
	NSMutableArray* _regularScanArray;
	NSMutableArray* _aggressiveScanArray;
	NSMutableArray* _advertisingArray;
	NSObject*<OS_dispatch_queue> _reportQueue;
	double _nextPushTime;

}

@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * scanArray;                              //@synthesize scanArray=_scanArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * regularScanArray;                     //@synthesize regularScanArray=_regularScanArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * aggressiveScanArray;                  //@synthesize aggressiveScanArray=_aggressiveScanArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * advertisingArray;                     //@synthesize advertisingArray=_advertisingArray - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reportQueue;              //@synthesize reportQueue=_reportQueue - In the implementation block
@property (assign,nonatomic) double nextPushTime;                                   //@synthesize nextPushTime=_nextPushTime - In the implementation block
+(id)getStringFromActivity:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)reportQueue;
-(id)generateStateDump;
-(void)reportPLStats;
-(id)getStatsDictionary;
-(void)startActivity:(unsigned long long)arg1 forType:(unsigned char)arg2 ;
-(void)stopActivity:(unsigned long long)arg1 forType:(unsigned char)arg2 ;
-(void)stopActivity:(unsigned long long)arg1 ;
-(void)startActivity:(unsigned long long)arg1 forType:(unsigned char)arg2 scanRate:(long long)arg3 ;
-(double)nextPushTime;
-(NSMutableArray *)regularScanArray;
-(NSMutableArray *)aggressiveScanArray;
-(NSMutableArray *)advertisingArray;
-(id)timeArrayFromArray:(id)arg1 ;
-(void)setNextPushTime:(double)arg1 ;
-(NSDictionary *)scanArray;
-(void)setScanArray:(NSDictionary *)arg1 ;
-(void)setRegularScanArray:(NSMutableArray *)arg1 ;
-(void)setAggressiveScanArray:(NSMutableArray *)arg1 ;
-(void)setAdvertisingArray:(NSMutableArray *)arg1 ;
-(void)setReportQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

