/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/TestProbe.h>
#import <libobjc.A.dylib/NetDiagnosticsShimDelegate.h>

@class NetDiagnosticsShim, NSString, NSMutableDictionary;

@interface NetDiagnosticProbe : TestProbe <NetDiagnosticsShimDelegate> {

	NetDiagnosticsShim* _netDiags;
	NSString* _taskName;
	NSString* _ndFilePath;
	NSMutableDictionary* _netDiagsTaskDict;

}

@property (nonatomic,retain) NetDiagnosticsShim * netDiags;                       //@synthesize netDiags=_netDiags - In the implementation block
@property (nonatomic,retain) NSString * taskName;                                 //@synthesize taskName=_taskName - In the implementation block
@property (nonatomic,retain) NSString * ndFilePath;                               //@synthesize ndFilePath=_ndFilePath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * netDiagsTaskDict;              //@synthesize netDiagsTaskDict=_netDiagsTaskDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)taskName;
-(void)setTaskName:(NSString *)arg1 ;
-(NetDiagnosticsShim *)netDiags;
-(void)dealloc;
-(BOOL)startNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(void)disconnectFromNetDiagnostics;
-(BOOL)netDiagnosticsTaskInProgress:(/*^block*/id)arg1 ;
-(id)setUpDefaultTaskDictionary;
-(BOOL)stopNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(NSString *)ndFilePath;
-(void)cancelTest:(/*^block*/id)arg1 ;
-(void)setNetDiags:(NetDiagnosticsShim *)arg1 ;
-(void)setNetDiagsTaskDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)netDiagsTaskDict;
-(void)setNdFilePath:(NSString *)arg1 ;
@end

