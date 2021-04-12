/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlaylistEndAction.h>

@protocol IKJSPlaylistEndAction <JSExport>
@property (readonly) long long STOP; 
@property (readonly) long long PAUSE; 
@property (readonly) long long WAIT_FOR_MORE_ITEMS; 
@required
-(long long)STOP;
-(long long)PAUSE;
-(long long)WAIT_FOR_MORE_ITEMS;

@end


@interface IKJSPlaylistEndAction : IKJSObject <IKJSPlaylistEndAction>

@property (readonly) long long STOP; 
@property (readonly) long long PAUSE; 
@property (readonly) long long WAIT_FOR_MORE_ITEMS; 
-(id)init;
-(long long)STOP;
-(long long)PAUSE;
-(long long)WAIT_FOR_MORE_ITEMS;
@end

