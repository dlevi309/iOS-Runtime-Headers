/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <AutoBugCaptureCore/DiagnosticReportGenerator.h>
#import <libobjc.A.dylib/NetDiagnosticsShimDelegate.h>

@class NetDiagnosticsShim, NSMutableDictionary, NSDictionary, NSDate, NSString;

@interface NetworkDiagnosticsReportGenerator : DiagnosticReportGenerator <NetDiagnosticsShimDelegate> {

	NetDiagnosticsShim* _netDiags;
	NSMutableDictionary* _options;
	NSDictionary* _netDiagsResults;
	NSDate* _reportStart;

}

@property (nonatomic,retain) NetDiagnosticsShim * netDiags;               //@synthesize netDiags=_netDiags - In the implementation block
@property (nonatomic,retain) NSDictionary * netDiagsResults;              //@synthesize netDiagsResults=_netDiagsResults - In the implementation block
@property (nonatomic,retain) NSDate * reportStart;                        //@synthesize reportStart=_reportStart - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * options;               //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(NSMutableDictionary *)options;
-(void)setOptions:(NSMutableDictionary *)arg1 ;
-(NetDiagnosticsShim *)netDiags;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
-(void)setNetDiags:(NetDiagnosticsShim *)arg1 ;
-(BOOL)startReportGeneration;
-(void)setNetDiagsResults:(NSDictionary *)arg1 ;
-(BOOL)startNetDiagnosticsTaskWithReply:(/*^block*/id)arg1 ;
-(NSDictionary *)netDiagsResults;
-(id)createDefaultTaskDictionaryWithTaskName:(const char*)arg1 ;
-(NSDate *)reportStart;
-(void)setReportStart:(NSDate *)arg1 ;
@end

