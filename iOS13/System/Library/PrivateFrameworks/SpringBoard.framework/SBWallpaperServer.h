/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id<SBWallpaperServerDelegate>)arg1 ;
-(id)_init;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(FBServiceClientAuthenticator *)accessAuthenticator;
-(void)setAccessAuthenticator:(FBServiceClientAuthenticator *)arg1 ;
-(void)_handleFetchThumbnailMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetVideoMessageWithWallpaperMode:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetColorNameMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetGradientMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRestoreDefaultWallpaperMessage:(id)arg1 fromClient:(id)arg2 ;
-(long long)_wallpaperVariantFromXPCDictionary:(id)arg1 ;
-(long long)_wallpaperModeFromXPCDictionary:(id)arg1 ;
@end

