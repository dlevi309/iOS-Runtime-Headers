/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unlock;
-(id)init;
-(BOOL)tryLock;
-(void)lock;
-(id)name;
-(void)setName:(id)arg1 ;
-(id)initWithName:(id)arg1 cachePath:(id)arg2 ;
-(void)dealloc;
@end

