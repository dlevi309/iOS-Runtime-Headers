/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {

	int _fd;
	NSString* _name;
	NSString* _cachePath;
	NSString* _fullPath;

}
-(id)init;
-(void)dealloc;
-(id)name;
-(void)lock;
-(void)unlock;
-(void)setName:(id)arg1 ;
-(BOOL)tryLock;
-(id)initWithName:(id)arg1 cachePath:(id)arg2 ;
@end

