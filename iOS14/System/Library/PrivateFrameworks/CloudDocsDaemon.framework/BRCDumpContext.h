/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCDumper, NSDate, PQLConnection, NSString, brc_task_tracker;

@interface BRCDumpContext : NSObject {

	long long _indentation;
	BRCDumper* _dumper;
	NSDate* _nowDate;
	BOOL _liveDaemon;
	BOOL _onlyActiveStuff;
	BOOL _dumpTrackedPendingDownloads;
	_sFILE* _fp;
	PQLConnection* _db;
	NSString* _indentationBaseString;
	brc_task_tracker* _taskTracker;

}

@property (nonatomic,readonly) PQLConnection * db;                          //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) _sFILE* fp;                                  //@synthesize fp=_fp - In the implementation block
@property (nonatomic,retain) NSString * indentationBaseString;              //@synthesize indentationBaseString=_indentationBaseString - In the implementation block
@property (assign,nonatomic) BOOL liveDaemon;                               //@synthesize liveDaemon=_liveDaemon - In the implementation block
@property (assign,nonatomic) BOOL onlyActiveStuff;                          //@synthesize onlyActiveStuff=_onlyActiveStuff - In the implementation block
@property (assign,nonatomic) BOOL dumpTrackedPendingDownloads;              //@synthesize dumpTrackedPendingDownloads=_dumpTrackedPendingDownloads - In the implementation block
@property (nonatomic,retain) brc_task_tracker * taskTracker;                //@synthesize taskTracker=_taskTracker - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
+(id)stringFromItemID:(id)arg1 context:(id)arg2 ;
+(id)stringFromCount:(long long)arg1 showActualCount:(BOOL)arg2 suffix:(id)arg3 isByteCount:(BOOL)arg4 context:(id)arg5 ;
+(id)stringFromCount:(long long)arg1 context:(id)arg2 ;
+(id)highlightedString:(id)arg1 type:(long long)arg2 context:(id)arg3 ;
+(id)stringFromByteCount:(long long)arg1 showActualByteCount:(BOOL)arg2 suffix:(id)arg3 context:(id)arg4 ;
+(id)stringFromDueStamp:(long long)arg1 allowsPast:(BOOL)arg2 context:(id)arg3 ;
+(id)stringFromOperationUUID:(unsigned char)arg1 context:(id)arg2 ;
+(id)stringFromThrottleState:(int)arg1 context:(id)arg2 ;
+(long long)nowFromContext:(id)arg1 ;
+(id)stringFromByteCount:(long long)arg1 context:(id)arg2 ;
+(id)stringFromItemAsString:(id)arg1 context:(id)arg2 ;
+(id)nowDateFromContext:(id)arg1 ;
+(id)stringFromDueDate:(id)arg1 allowsPast:(BOOL)arg2 context:(id)arg3 ;
+(id)stringFromError:(id)arg1 context:(id)arg2 ;
+(id)stringFromInterval:(double)arg1 context:(id)arg2 ;
+(id)stringFromErrorString:(id)arg1 context:(id)arg2 ;
-(_sFILE*)fp;
-(PQLConnection *)db;
-(BOOL)isCancelled;
-(brc_task_tracker *)taskTracker;
-(id)highlightedString:(id)arg1 type:(long long)arg2 ;
-(void)writeLineWithFormat:(id)arg1 ;
-(void)pushIndentation;
-(void)popIndentation;
-(id)initWithFile:(_sFILE*)arg1 db:(id)arg2 ;
-(void)setLiveDaemon:(BOOL)arg1 ;
-(void)setOnlyActiveStuff:(BOOL)arg1 ;
-(void)setTaskTracker:(brc_task_tracker *)arg1 ;
-(BOOL)liveDaemon;
-(void)setDumpTrackedPendingDownloads:(BOOL)arg1 ;
-(BOOL)onlyActiveStuff;
-(id)initWithDumper:(id)arg1 ;
-(NSString *)indentationBaseString;
-(void)setIndentationBaseString:(NSString *)arg1 ;
-(BOOL)dumpTrackedPendingDownloads;
@end

