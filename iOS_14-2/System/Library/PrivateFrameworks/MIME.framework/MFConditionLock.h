/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unlock;
-(id)init;
-(BOOL)isLockedByMe;
-(id)initWithName:(id)arg1 condition:(long long)arg2 andDelegate:(id)arg3 ;
-(void)unlockWithCondition:(long long)arg1 ;
-(id)description;
-(BOOL)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(void)dealloc;
@end

