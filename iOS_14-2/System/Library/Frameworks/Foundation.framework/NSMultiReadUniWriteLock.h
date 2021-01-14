/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {

	void* _priv;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)unlock;
-(id)init;
-(void)lock;
-(id)name;
-(BOOL)tryLockForReading;
-(BOOL)tryLockForWriting;
-(BOOL)lockForReadingBeforeDate:(id)arg1 ;
-(void)lockForReading;
-(BOOL)lockForWritingBeforeDate:(id)arg1 ;
-(void)lockForWriting;
-(id)description;
-(void)setName:(id)arg1 ;
-(void)dealloc;
@end

