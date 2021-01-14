/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface NSLock : NSObject <NSLocking> {

	void* _priv;

}

@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)unlock;
-(id)init;
-(BOOL)tryLock;
-(void)lock;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(void)dealloc;
@end

