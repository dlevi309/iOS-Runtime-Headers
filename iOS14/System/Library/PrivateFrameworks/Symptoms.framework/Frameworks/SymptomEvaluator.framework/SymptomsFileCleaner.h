/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/NetDiagnosticsShimDelegate.h>

@protocol SymptomsFileCleanerDelegate, OS_dispatch_queue;
@class NetDiagnosticsShim, NSObject, NSArray, NSString;

@interface SymptomsFileCleaner : NSObject <NetDiagnosticsShimDelegate> {

	id<SymptomsFileCleanerDelegate> _delegate;
	NetDiagnosticsShim* _netDiags;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _filesToDelete;

}

@property (retain) NetDiagnosticsShim * netDiags;                         //@synthesize netDiags=_netDiags - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (retain) NSArray * filesToDelete;                               //@synthesize filesToDelete=_filesToDelete - In the implementation block
@property (retain) id<SymptomsFileCleanerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(id<SymptomsFileCleanerDelegate>)delegate;
-(void)setDelegate:(id<SymptomsFileCleanerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NetDiagnosticsShim *)netDiags;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cleanupFiles:(id)arg1 ;
-(void)setFilesToDelete:(NSArray *)arg1 ;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
-(void)setNetDiags:(NetDiagnosticsShim *)arg1 ;
-(NSArray *)filesToDelete;
@end

