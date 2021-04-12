/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _SFAccessPolicy : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_SF7 _accessibility;
	long long _sharingPolicy;
	NSString* _accessGroup;
	NSArray* _accessControlList;

}

@property (nonatomic,readonly) const CFDictionaryRef secAccessibilityAttributes; 
@property (nonatomic,copy) NSArray * accessControlList;                                       //@synthesize accessControlList=_accessControlList - In the implementation block
@property (assign,nonatomic) SCD_Struct_SF9 accessibility;                                    //@synthesize accessibility=_accessibility - In the implementation block
@property (assign,nonatomic) long long sharingPolicy;                                         //@synthesize sharingPolicy=_sharingPolicy - In the implementation block
@property (nonatomic,copy) NSString * accessGroup;                                            //@synthesize accessGroup=_accessGroup - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)accessPolicyWithSecAccessibility:(CFStringRef)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccessControlList:(NSArray *)arg1 ;
-(void)setAccessibility:(SCD_Struct_SF9)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(long long)sharingPolicy;
-(SCD_Struct_SF9)accessibility;
-(id)initWithAccessibility:(SCD_Struct_SF9)arg1 sharingPolicy:(long long)arg2 ;
-(const CFDictionaryRef)secAccessibilityAttributes;
-(void)setSharingPolicy:(long long)arg1 ;
-(NSArray *)accessControlList;
@end

