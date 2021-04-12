/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, SUCoreDiagStats, NSString;

@interface SUCoreDiag : NSObject {

	BOOL _isSharedDiag;
	NSMutableArray* _trackingHistory;
	NSObject*<OS_dispatch_queue> _trackingQueue;
	SUCoreDiagStats* _trackStats;
	NSString* _appendingDumpFilename;
	NSString* _lastReportedUUID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> trackingQueue;              //@synthesize trackingQueue=_trackingQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * trackingHistory;                          //@synthesize trackingHistory=_trackingHistory - In the implementation block
@property (nonatomic,retain) SUCoreDiagStats * trackStats;                              //@synthesize trackStats=_trackStats - In the implementation block
@property (nonatomic,retain) NSString * appendingDumpFilename;                          //@synthesize appendingDumpFilename=_appendingDumpFilename - In the implementation block
@property (nonatomic,retain) NSString * lastReportedUUID;                               //@synthesize lastReportedUUID=_lastReportedUUID - In the implementation block
@property (assign,nonatomic) BOOL isSharedDiag;                                         //@synthesize isSharedDiag=_isSharedDiag - In the implementation block
+(id)sharedDiag;
-(void)trackError:(id)arg1 forReason:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
-(void)trackAnomaly:(id)arg1 forReason:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
-(void)trackLastReportedUUID:(id)arg1 ;
-(void)trackBegin:(id)arg1 ;
-(id)initWithAppendedDomain:(id)arg1 appendingDumpFilename:(id)arg2 ;
-(void)trackFailure:(id)arg1 forReason:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
-(void)trackEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 ;
-(void)trackEnd:(id)arg1 ;
-(void)trackBegin:(id)arg1 atLevel:(int)arg2 ;
-(void)trackEnd:(id)arg1 atLevel:(int)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
-(void)trackEnd:(id)arg1 atLevel:(int)arg2 ;
-(void)trackStateEvent:(id)arg1 previousState:(id)arg2 handlingEvent:(id)arg3 nextState:(id)arg4 performingAction:(id)arg5 withInfo:(id)arg6 ;
-(void)setIsSharedDiag:(BOOL)arg1 ;
-(void)trackBegin:(id)arg1 atLevel:(int)arg2 forModule:(id)arg3 withIdentifier:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)trackingQueue;
-(void)_appendToHistory:(id)arg1 ;
-(SUCoreDiagStats *)trackStats;
-(void)trackEnd:(id)arg1 atLevel:(int)arg2 forModule:(id)arg3 withIdentifier:(id)arg4 withResult:(long long)arg5 withError:(id)arg6 ;
-(BOOL)isSharedDiag;
-(void)_logTrackedError:(id)arg1 fromLocation:(id)arg2 forReason:(id)arg3 withResult:(long long)arg4 withError:(id)arg5 ;
-(void)_dumpTracked:(id)arg1 dumpingTo:(long long)arg2 usingFilename:(id)arg3 clearingStatistics:(BOOL)arg4 clearingHistory:(BOOL)arg5 ;
-(void)trackFault:(id)arg1 forReason:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
-(void)setLastReportedUUID:(NSString *)arg1 ;
-(id)_copyTrackedStatsClearingAfter:(BOOL)arg1 ;
-(NSMutableArray *)trackingHistory;
-(void)setTrackingHistory:(NSMutableArray *)arg1 ;
-(id)_dumpMaskToString:(long long)arg1 ;
-(NSString *)lastReportedUUID;
-(void)_dumpToFile:(id)arg1 dumpingDict:(id)arg2 forReason:(id)arg3 ;
-(void)_dumpEvent:(id)arg1 ;
-(void)setTrackStats:(SUCoreDiagStats *)arg1 ;
-(NSString *)appendingDumpFilename;
-(void)trackBegin:(id)arg1 atLevel:(int)arg2 forModule:(id)arg3 ;
-(void)trackEnd:(id)arg1 atLevel:(int)arg2 forModule:(id)arg3 ;
-(void)trackEnd:(id)arg1 atLevel:(int)arg2 forModule:(id)arg3 withResult:(long long)arg4 withError:(id)arg5 ;
-(id)copyTrackedStatsClearingAfter:(BOOL)arg1 ;
-(void)collectTrackedStatsClearingAfter:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dumpTracked:(id)arg1 dumpingTo:(long long)arg2 usingFilename:(id)arg3 clearingStatistics:(BOOL)arg4 clearingHistory:(BOOL)arg5 ;
-(id)loadDump:(id)arg1 ;
-(void)setAppendingDumpFilename:(NSString *)arg1 ;
@end

