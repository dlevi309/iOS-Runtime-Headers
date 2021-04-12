/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unlock;
-(BOOL)tryLockWhenCondition:(long long)arg1 ;
-(id)init;
-(BOOL)tryLock;
-(id)initWithCondition:(long long)arg1 ;
-(void)lock;
-(void)unlockWithCondition:(long long)arg1 ;
-(NSString *)name;
-(id)description;
-(void)lockWhenCondition:(long long)arg1 ;
-(BOOL)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
-(long long)condition;
-(void)setName:(NSString *)arg1 ;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(void)dealloc;
@end

