/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSNotification.h>

@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification {

	NSString* name;
	id object;
	NSDictionary* userInfo;
	BOOL dyingObject;

}
+(id)newTempNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)dealloc;
-(id)name;
-(id)object;
-(id)userInfo;
-(id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)recycle;
@end

