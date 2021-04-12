/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMBufferObservanceChange.h>

@class NSString, NSObject;

@interface CAMBufferNotificationObservanceChange : CAMBufferObservanceChange {

	NSString* _notification;
	NSObject* _object;

}

@property (nonatomic,copy,readonly) NSString * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                  //@synthesize object=_object - In the implementation block
-(NSObject *)object;
-(NSString *)notification;
-(id)initWithNotification:(id)arg1 object:(id)arg2 ;
@end

