/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMBufferObservance.h>

@class NSString, NSObject, NSNotificationCenter;

@interface CAMBufferNotificationObservance : CAMBufferObservance {

	NSString* _notification;
	NSObject* _object;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,copy,readonly) NSString * notification;                           //@synthesize notification=_notification - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                               //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
-(NSObject *)object;
-(NSString *)notification;
-(NSNotificationCenter *)notificationCenter;
-(void)setupObservanceForBuffer:(id)arg1 ;
-(void)teardownObservanceForBuffer:(id)arg1 ;
-(void)fulfillWithChange:(id)arg1 ;
-(id)initWithNotification:(id)arg1 object:(id)arg2 center:(id)arg3 removeOnceEnabled:(BOOL)arg4 ;
@end

