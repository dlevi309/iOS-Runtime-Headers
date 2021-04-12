/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)conformsToType:(id)arg1 ;
-(NSString *)typeDescription;
-(BOOL)conformsToUTType:(const CFStringRef)arg1 ;
-(BOOL)isEqualToClass:(Class)arg1 ;
-(BOOL)conformsToTypes:(id)arg1 ;
-(BOOL)isEqualToType:(id)arg1 ;
-(BOOL)isEqualToUTType:(const CFStringRef)arg1 ;
-(BOOL)conformsToClass:(Class)arg1 ;
@end

