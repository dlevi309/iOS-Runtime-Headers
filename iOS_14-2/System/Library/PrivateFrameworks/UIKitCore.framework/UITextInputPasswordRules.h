/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UITextInputPasswordRules : NSObject <NSSecureCoding, NSCopying> {

	NSString* _passwordRulesDescriptor;

}

@property (nonatomic,readonly) NSString * passwordRulesDescriptor;              //@synthesize passwordRulesDescriptor=_passwordRulesDescriptor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)passwordRulesWithDescriptor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)passwordRulesDescriptor;
-(id)initWithCoder:(id)arg1 ;
-(id)initPasswordRulesWithDescriptor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

