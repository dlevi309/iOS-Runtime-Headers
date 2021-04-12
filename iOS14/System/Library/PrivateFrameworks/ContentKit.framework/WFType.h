/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFType : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly) NSString * typeDescription; 
@property (nonatomic,copy,readonly) NSString * string; 
+(BOOL)supportsSecureCoding;
-(BOOL)conformsToType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(NSString *)typeDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToUTType:(const CFStringRef)arg1 ;
-(BOOL)isEqualToClass:(Class)arg1 ;
-(BOOL)conformsToTypes:(id)arg1 ;
-(BOOL)isEqualToType:(id)arg1 ;
-(BOOL)isEqualToUTType:(const CFStringRef)arg1 ;
-(BOOL)conformsToClass:(Class)arg1 ;
@end

