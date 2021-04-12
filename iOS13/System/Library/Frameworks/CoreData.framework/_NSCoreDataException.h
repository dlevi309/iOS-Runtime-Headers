/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreFoundation/NSException.h>

@class NSString;

@interface _NSCoreDataException : NSException {

	long long _code;
	NSString* _domain;

}
+(id)exceptionWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4 ;
-(void)dealloc;
-(id)domain;
-(long long)code;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4 ;
-(void)_setDomain:(id)arg1 ;
-(id)errorObjectWithUserInfo:(id)arg1 ;
@end

