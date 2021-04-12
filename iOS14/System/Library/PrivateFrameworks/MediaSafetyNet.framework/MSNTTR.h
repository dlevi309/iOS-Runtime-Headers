/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaSafetyNet.framework/MediaSafetyNet
*/


#import <MediaSafetyNet/MediaSafetyNet-Structs.h>
@class NSURL;

@interface MSNTTR : NSObject {

	CFRunLoopSourceRef _runLoopSource;
	CFUserNotificationRef _userNotification;
	BOOL _pendedTTR;
	NSURL* _url;

}

@property (retain) NSURL * url;                       //@synthesize url=_url - In the implementation block
@property (readonly) BOOL TTRInProgress; 
@property (assign) BOOL pendedTTR;                    //@synthesize pendedTTR=_pendedTTR - In the implementation block
+(id)sharedInstance;
-(void)setPendedTTR:(BOOL)arg1 ;
-(void)completeTTR:(id)arg1 ;
-(void)continueTTR;
-(void)beginTTRWithTitle:(id)arg1 date:(id)arg2 ;
-(BOOL)TTRInProgress;
-(NSURL *)url;
-(void)beginTTRWithTitle:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)handleCallback:(unsigned long long)arg1 ;
-(BOOL)pendedTTR;
@end

