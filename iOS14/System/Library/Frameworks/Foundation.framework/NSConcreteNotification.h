/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)userInfo;
-(id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)object;
-(void)recycle;
-(id)name;
-(void)dealloc;
@end

