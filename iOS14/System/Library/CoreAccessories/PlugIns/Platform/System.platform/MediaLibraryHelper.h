/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/System.platform/System
*/

#import <libobjc.A.dylib/WorkspaceObserverDelegate.h>

@class WorkspaceObserver, NSString;

@interface MediaLibraryHelper : NSObject <WorkspaceObserverDelegate> {

	WorkspaceObserver* _workspaceObserver;
	BOOL _iTunesRadioEnabled;
	BOOL _showMusic;
	BOOL _showPodcasts;
	BOOL _showAudioBooks;

}

@property (readonly) BOOL showMusic;                                //@synthesize showMusic=_showMusic - In the implementation block
@property (readonly) BOOL showPodcasts;                             //@synthesize showPodcasts=_showPodcasts - In the implementation block
@property (readonly) BOOL showAudioBooks;                           //@synthesize showAudioBooks=_showAudioBooks - In the implementation block
@property (readonly) BOOL iTunesRadioEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
-(void)_updateITunesRadioEnabled;
-(void)handleAppInstall:(id)arg1 ;
-(void)handleAppUninstall:(id)arg1 ;
-(BOOL)iTunesRadioEnabled;
-(int)getFilteredMediaTypesMask:(int)arg1 ;
-(BOOL)showMusic;
-(BOOL)showPodcasts;
-(BOOL)showAudioBooks;
@end

