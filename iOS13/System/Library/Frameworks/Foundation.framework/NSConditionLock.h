/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface NSConditionLock : NSObject <NSLocking> {

	void* _priv;

}

@property (readonly) long long condition; 
@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)lock;
-(void)unlock;
-(void)setName:(NSString *)arg1 ;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(id)initWithCondition:(long long)arg1 ;
-(BOOL)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
-(long long)condition;
-(void)lockWhenCondition:(long long)arg1 ;
-(BOOL)tryLockWhenCondition:(long long)arg1 ;
-(void)unlockWithCondition:(long long)arg1 ;
@end

