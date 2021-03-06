/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSUUID : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * UUIDString; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)_LS_nullUUID;
+(id)_LS_UUIDWithData:(id)arg1 digestType:(long long)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)UUID;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUUIDString:(id)arg1 ;
-(void)getUUIDBytes:(unsigned char)arg1 ;
-(Class)classForCoder;
-(CFStringRef)_cfUUIDString;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)UUIDString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

