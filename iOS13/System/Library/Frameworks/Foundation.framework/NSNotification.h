/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface NSNotification : NSObject <NSCopying, NSCoding>

@property (copy,readonly) NSString * name; 
@property (retain,readonly) id object; 
@property (copy,readonly) NSDictionary * userInfo; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
+(id)notificationWithName:(id)arg1 object:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
@end

