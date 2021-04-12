/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlaylist.h>

@protocol IKJSPlaylist <JSExport>
@property (nonatomic,readonly) unsigned long long length; 
@property (assign,nonatomic) long long endAction; 
@property (assign,nonatomic) long long repeatMode; 
@required
-(id)pop;
-(id)item:(long long)arg1;
-(void)push:(id)arg1;
-(id)init;
-(unsigned long long)length;
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
-(id)pop;
-(id)item:(long long)arg1 ;
-(void)push:(id)arg1 ;
-(id)init;
-(IKAppPlaylistBridge *)bridge;
-(unsigned long long)length;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(void)dealloc;
-(void)setEndAction:(long long)arg1 ;
-(long long)endAction;
-(id)splice:(unsigned long long)arg1 :(unsigned long long)arg2 :(id)arg3 ;
@end

