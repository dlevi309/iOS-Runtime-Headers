/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NEFilterSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	NSArray* _rules;
	long long _defaultAction;

}

@property (copy,readonly) NSArray * rules;                 //@synthesize rules=_rules - In the implementation block
@property (readonly) long long defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRules:(id)arg1 defaultAction:(long long)arg2 ;
-(long long)defaultAction;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)rules;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

