/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


#import <TouchRemote/TouchRemote-Structs.h>
@interface _TRUserNotification : NSObject {

	int _response;
	CFUserNotificationRef _userNotification;
	unsigned long long _responseFlags;

}

@property (nonatomic,readonly) CFUserNotificationRef CFUserNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,readonly) int response;                                          //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned long long responseFlags;                      //@synthesize responseFlags=_responseFlags - In the implementation block
@property (nonatomic,readonly) BOOL didAccept; 
+(id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 ;
+(id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 isTopMost:(BOOL)arg5 dismissOnUnlock:(BOOL)arg6 ;
-(void)show;
-(int)response;
-(unsigned long long)responseFlags;
-(void)cancel;
-(void)dealloc;
-(BOOL)didAccept;
-(id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(id)textFieldValueAtIndex:(unsigned long long)arg1 ;
-(CFUserNotificationRef)CFUserNotification;
@end

