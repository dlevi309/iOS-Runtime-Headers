/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@protocol SBWallpaperServerDelegate;
@class FBServiceClientAuthenticator;

@interface SBWallpaperServer : FBSServiceFacility {

	id<SBWallpaperServerDelegate> _delegate;
	FBServiceClientAuthenticator* _accessAuthenticator;

}

@property (assign,nonatomic,__weak) id<SBWallpaperServerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBServiceClientAuthenticator * accessAuthenticator;              //@synthesize accessAuthenticator=_accessAuthenticator - In the implementation block
+(id)sharedInstance;
-(id<SBWallpaperServerDelegate>)delegate;
-(BOOL)_clientPermittedToModifyWallpaper:(id)arg1 ;
-(long long)_wallpaperVariantFromXPCDictionary:(id)arg1 ;
-(long long)_wallpaperModeFromXPCDictionary:(id)arg1 ;
-(void)_handleRestoreDefaultWallpaperMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)setAccessAuthenticator:(FBServiceClientAuthenticator *)arg1 ;
-(void)_handleSetVideoMessageWithWallpaperMode:(id)arg1 fromClient:(id)arg2 ;
-(void)setDelegate:(id<SBWallpaperServerDelegate>)arg1 ;
-(void)_handleFetchOriginalImageMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleFetchThumbnailMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetColorMessage:(id)arg1 fromClient:(id)arg2 ;
-(long long)_deviceOrientationFromXPCDictionary:(id)arg1 ;
-(void)_handleFetchOriginalVideoURLMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetColorNameMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetGradientMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id)_init;
-(void)_handleFetchContentCutoutBoundsMessage:(id)arg1 fromClient:(id)arg2 ;
-(FBServiceClientAuthenticator *)accessAuthenticator;
-(BOOL)_xpcObjectIsDictionary:(id)arg1 ;
@end

