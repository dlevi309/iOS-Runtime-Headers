/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/_DKHistoricalDeletingMonitor.h>

@class LSApplicationWorkspace, NSString;

@interface _DKAppInstallMonitor : _DKMonitor <LSApplicationWorkspaceObserverProtocol, _DKHistoricalDeletingMonitor> {

	/*^block*/id historicalDeletingHandler;
	LSApplicationWorkspace* _appWorkspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * appWorkspace;              //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id historicalDeletingHandler; 
+(id)entitlements;
+(id)eventStream;
+(id)_metadataFromProxy:(id)arg1 didInstall:(BOOL)arg2 ;
+(id)_identifierFromProxy:(id)arg1 ;
+(id)_dateFromProxy:(id)arg1 ;
+(id)_eventWithAppProxy:(id)arg1 didInstall:(BOOL)arg2 ;
-(id)init;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)historicalDeletingHandler;
-(void)setHistoricalDeletingHandler:(id)arg1 ;
-(LSApplicationWorkspace *)appWorkspace;
-(void)setAppWorkspace:(LSApplicationWorkspace *)arg1 ;
-(void)_applicationsDidChange:(id)arg1 didInstall:(BOOL)arg2 ;
@end

