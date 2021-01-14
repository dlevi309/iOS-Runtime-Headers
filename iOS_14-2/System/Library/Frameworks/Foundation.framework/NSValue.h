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

@interface NSValue : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) const char* objCType; 
+(id)bs_valueWithCGSize:(CGSize)arg1 ;
+(id)bs_valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)bs_valueWithCGRect:(CGRect)arg1 ;
+(id)bs_valueWithCGPoint:(CGPoint)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)valueWithRange:(NSRange)arg1 ;
+(id)valueWithWeakObject:(id)arg1 ;
+(id)valueWithRect:(CGRect)arg1 ;
+(id)valueWithSize:(CGSize)arg1 ;
+(id)valueWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)valueWithPoint:(CGPoint)arg1 ;
+(id)valueWithNonretainedObject:(id)arg1 ;
+(id)valueWithPointer:(const void*)arg1 ;
+(id)valueWithEdgeInsets:(NSEdgeInsets)arg1 ;
+(id)value:(const void*)arg1 withObjCType:(const char*)arg2 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(CGSize)bs_CGSizeValue;
-(CGAffineTransform)bs_CGAffineTransformValue;
-(BOOL)bs_getValue:(out void*)arg1 ofSize:(unsigned long long)arg2 ;
-(CGRect)bs_CGRectValue;
-(CGPoint)bs_CGPointValue;
-(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)isNSValue__;
-(NSRange)rangeValue;
-(CGRect)rectValue;
-(CGSize)sizeValue;
-(id)init;
-(CGPoint)pointValue;
-(void)encodeWithCoder:(id)arg1 ;
-(void*)pointerValue;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSString *)description;
-(Class)classForCoder;
-(NSEdgeInsets)edgeInsetsValue;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void)getValue:(void*)arg1 ;
-(id)nonretainedObjectValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 strict:(BOOL)arg3 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(id)weakObjectValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)objCType;
-(BOOL)isEqual:(id)arg1 ;
@end

