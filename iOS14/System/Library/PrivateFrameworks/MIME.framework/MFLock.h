/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <Foundation/NSLock.h>
#import <libobjc.A.dylib/MFLockObject.h>

@class NSString;

@interface MFLock : NSLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(void)unlock;
-(id)init;
-(BOOL)tryLock;
-(BOOL)isLockedByMe;
-(void)lock;
-(id)description;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(void)dealloc;
@end

