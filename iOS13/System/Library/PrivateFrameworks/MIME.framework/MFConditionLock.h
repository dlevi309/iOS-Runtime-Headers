/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <Foundation/NSConditionLock.h>
#import <libobjc.A.dylib/MFLockObject.h>

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)unlock;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
-(void)unlockWithCondition:(long long)arg1 ;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
-(id)initWithName:(id)arg1 condition:(long long)arg2 andDelegate:(id)arg3 ;
-(BOOL)isLockedByMe;
@end

