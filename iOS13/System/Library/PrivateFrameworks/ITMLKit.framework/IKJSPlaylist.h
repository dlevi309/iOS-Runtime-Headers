/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlaylist.h>

@protocol IKJSPlaylist <JSExport>
@property (nonatomic,readonly) unsigned long long length; 
@property (assign,nonatomic) long long endAction; 
@property (assign,nonatomic) long long repeatMode; 
@required
-(id)init;
-(unsigned long long)length;
-(void)push:(id)arg1;
-(id)pop;
-(id)item:(long long)arg1;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1;
-(void)setEndAction:(long long)arg1;
-(long long)endAction;
-(id)splice:(long long)arg1 :(long long)arg2 :(id)arg3;

@end


@class IKAppPlaylistBridge;

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist> {

	IKAppPlaylistBridge* _bridge;

}

@property (nonatomic,readonly) IKAppPlaylistBridge * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
@property (assign,nonatomic) long long endAction; 
@property (assign,nonatomic) long long repeatMode; 
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(void)push:(id)arg1 ;
-(id)pop;
-(id)item:(long long)arg1 ;
-(IKAppPlaylistBridge *)bridge;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(void)setEndAction:(long long)arg1 ;
-(long long)endAction;
-(id)splice:(unsigned long long)arg1 :(unsigned long long)arg2 :(id)arg3 ;
@end

