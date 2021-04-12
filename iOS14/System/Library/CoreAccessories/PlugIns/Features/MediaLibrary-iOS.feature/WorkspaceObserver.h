/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/MediaLibrary-iOS.feature/MediaLibrary-iOS
*/

#import <CoreServices/LSApplicationWorkspaceObserver.h>

@protocol LSApplicationWorkspaceObserverProtocol;
@class NSObject;

@interface WorkspaceObserver : LSApplicationWorkspaceObserver {

	NSObject*<LSApplicationWorkspaceObserverProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<WorkspaceObserverDelegate> delegate; 
-(void)startObserving;
-(void)stopObserving;
-(NSObject*<WorkspaceObserverDelegate>)delegate;
-(void)setDelegate:(NSObject*<WorkspaceObserverDelegate>)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
@end

