/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
*/

#import <libobjc.A.dylib/AERObservation.h>

@class NSString, NSNotificationCenter, NSObject;

@interface AERNotificationObservation : NSObject <AERObservation> {

	NSString* _notificationName;
	NSNotificationCenter* _notificationCenter;
	NSObject* _object;
	/*^block*/id _notificationHandler;

}
-(void)invalidate;
-(void)dealloc;
-(void)notificationDidFire:(id)arg1 ;
@end

