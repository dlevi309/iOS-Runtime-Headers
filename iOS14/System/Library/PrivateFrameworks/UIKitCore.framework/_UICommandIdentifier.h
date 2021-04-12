/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UICommandIdentifier : NSObject <NSCopying, NSSecureCoding> {

	SEL _action;
	id _propertyList;

}

@property (nonatomic,readonly) SEL action;                   //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id propertyList;              //@synthesize propertyList=_propertyList - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identifierWithAction:(SEL)arg1 propertyList:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SEL)action;
-(id)description;
-(id)initWithAction:(SEL)arg1 propertyList:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)propertyList;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

