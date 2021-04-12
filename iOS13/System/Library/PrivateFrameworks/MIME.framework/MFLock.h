/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(void)lock;
-(void)unlock;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
-(BOOL)isLockedByMe;
@end

