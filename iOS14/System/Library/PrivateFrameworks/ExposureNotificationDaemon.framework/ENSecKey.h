/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@interface ENSecKey : NSObject {

	SecKeyRef _keyRef;

}

@property (nonatomic,readonly) SecKeyRef keyRef;              //@synthesize keyRef=_keyRef - In the implementation block
+(id)keyFromBase64String:(id)arg1 keyClass:(const CFStringRef)arg2 error:(id*)arg3 ;
-(SecKeyRef)keyRef;
-(void)dealloc;
-(id)initWithKeyRef:(SecKeyRef)arg1 ;
@end

