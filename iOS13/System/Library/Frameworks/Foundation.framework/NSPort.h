/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface NSPort : NSObject <NSCopying, NSCoding>

@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) unsigned long long reservedSpaceLength; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)port;
+(id)portWithMachPort:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(unsigned)machPort;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(unsigned long long)reservedSpaceLength;
-(Class)classForPortCoder;
-(BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
@end

