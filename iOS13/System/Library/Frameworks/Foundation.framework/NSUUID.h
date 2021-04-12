/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * UUIDString; 
+(id)_LS_UUIDWithData:(id)arg1 SHA1:(BOOL)arg2 ;
+(id)_LS_nullUUID;
+(id)_LS_UUIDWithData:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)UUID;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(void)getUUIDBytes:(unsigned char)arg1 ;
-(NSString *)UUIDString;
-(id)initWithUUIDString:(id)arg1 ;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(CFStringRef)_cfUUIDString;
@end

