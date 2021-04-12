/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/MediaLibrary-iOS.feature/MediaLibrary-iOS
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
-(void)dealloc;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)_updateITunesRadioEnabled;
-(void)handleAppInstall:(id)arg1 ;
-(void)handleAppUninstall:(id)arg1 ;
-(BOOL)iTunesRadioEnabled;
-(int)getFilteredMediaTypesMask:(int)arg1 ;
-(BOOL)showMusic;
-(BOOL)showPodcasts;
-(BOOL)showAudioBooks;
@end

