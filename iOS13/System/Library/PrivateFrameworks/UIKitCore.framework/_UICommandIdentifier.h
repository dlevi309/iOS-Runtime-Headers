/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertyList;
-(SEL)action;
-(id)initWithAction:(SEL)arg1 propertyList:(id)arg2 ;
@end

