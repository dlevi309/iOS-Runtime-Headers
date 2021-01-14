/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKAppPlaylist;
@class IKAppContext, IKJSPlaylist;

@interface IKAppPlaylistBridge : NSObject {

	id<IKAppPlaylist> _appPlaylist;
	IKAppContext* _appContext;
	IKJSPlaylist* _jsPlaylist;

}

@property (nonatomic,__weak,readonly) IKAppContext * appContext;                  //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,__weak,readonly) IKJSPlaylist * jsPlaylist;                  //@synthesize jsPlaylist=_jsPlaylist - In the implementation block
@property (readonly) unsigned long long length; 
@property (assign,nonatomic) long long endAction; 
@property (assign,nonatomic) long long repeatMode; 
@property (nonatomic,__weak,readonly) id<IKAppPlaylist> appPlaylist;              //@synthesize appPlaylist=_appPlaylist - In the implementation block
-(id)item:(long long)arg1 ;
-(unsigned long long)length;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(void)cleanup;
-(IKAppContext *)appContext;
-(void)_evaluateDelegateBlockSync:(/*^block*/id)arg1 ;
-(id<IKAppPlaylist>)appPlaylist;
-(void)setEndAction:(long long)arg1 ;
-(long long)endAction;
-(id)initWithAppContext:(id)arg1 jsPlaylist:(id)arg2 ;
-(id)replaceItemsAt:(long long)arg1 count:(unsigned long long)arg2 with:(id)arg3 ;
-(IKJSPlaylist *)jsPlaylist;
@end

