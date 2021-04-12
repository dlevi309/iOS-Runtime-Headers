/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsTriggeringToggle.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSString;

@interface MapsSuggestionsMapsInstalledTriggeringToggle : MapsSuggestionsTriggeringToggle <LSApplicationWorkspaceObserverProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddFirstObserver;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)didRemoveLastObserver;
-(BOOL)shouldRun;
-(void)applicationsDidUninstall:(id)arg1 ;
@end

