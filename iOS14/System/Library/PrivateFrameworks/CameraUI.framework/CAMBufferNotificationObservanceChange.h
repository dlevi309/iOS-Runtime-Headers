/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)notification;
-(NSObject *)object;
-(id)initWithNotification:(id)arg1 object:(id)arg2 ;
@end

