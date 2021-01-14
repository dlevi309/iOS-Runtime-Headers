/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSPlayerMediaItemChangeReason.h>

@protocol IKJSPlayerMediaItemChangeReason <JSExport>
@property (readonly) long long UNKNOWN; 
@property (readonly) long long PLAYED_TO_END; 
@property (readonly) long long FORWARDED_TO_END; 
@property (readonly) long long ERRORED; 
@property (readonly) long long PLAYLIST_CHANGED; 
@property (readonly) long long USER_INITIATED; 
@required
-(long long)UNKNOWN;
-(long long)ERRORED;
-(long long)PLAYED_TO_END;
-(long long)FORWARDED_TO_END;
-(long long)PLAYLIST_CHANGED;
-(long long)USER_INITIATED;

@end


@interface IKJSPlayerMediaItemChangeReason : IKJSObject <IKJSPlayerMediaItemChangeReason>

@property (readonly) long long UNKNOWN; 
@property (readonly) long long PLAYED_TO_END; 
@property (readonly) long long FORWARDED_TO_END; 
@property (readonly) long long ERRORED; 
@property (readonly) long long PLAYLIST_CHANGED; 
@property (readonly) long long USER_INITIATED; 
-(id)init;
-(long long)UNKNOWN;
-(long long)ERRORED;
-(long long)PLAYED_TO_END;
-(long long)FORWARDED_TO_END;
-(long long)PLAYLIST_CHANGED;
-(long long)USER_INITIATED;
@end

