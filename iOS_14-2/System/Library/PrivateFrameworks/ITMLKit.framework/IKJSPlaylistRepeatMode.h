/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlaylistRepeatMode.h>

@protocol IKJSPlaylistRepeatMode <JSExport>
@property (readonly) long long NONE; 
@property (readonly) long long ONE; 
@property (readonly) long long ALL; 
@required
-(long long)ONE;
-(long long)ALL;
-(long long)NONE;

@end


@interface IKJSPlaylistRepeatMode : IKJSObject <IKJSPlaylistRepeatMode>

@property (readonly) long long NONE; 
@property (readonly) long long ONE; 
@property (readonly) long long ALL; 
-(long long)ONE;
-(long long)ALL;
-(id)init;
-(long long)NONE;
@end

