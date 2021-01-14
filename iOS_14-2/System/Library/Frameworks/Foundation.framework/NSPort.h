/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface NSPort : NSObject <NSCopying, NSCoding>

@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) unsigned long long reservedSpaceLength; 
+(id)port;
+(id)portWithMachPort:(unsigned)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned)machPort;
-(id)delegate;
-(id)replacementObjectForCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForPortCoder;
-(BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)reservedSpaceLength;
-(id)initWithMachPort:(unsigned)arg1 ;
-(BOOL)isValid;
-(Class)classForCoder;
-(BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

