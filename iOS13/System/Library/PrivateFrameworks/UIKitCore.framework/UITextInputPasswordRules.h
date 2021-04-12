/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)passwordRulesDescriptor;
-(id)initPasswordRulesWithDescriptor:(id)arg1 ;
@end

