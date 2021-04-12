/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSet, NSString;

@interface SBLayoutState : NSObject <BSDescriptionProviding> {

	long long _interfaceOrientation;
	long long _elementInterfaceOrientation;
	NSSet* _elements;

}

@property (nonatomic,readonly) NSSet * elements;                                   //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) long long elementInterfaceOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_defaultInterfaceOrientation;
-(id)appLayout;
-(BOOL)isEqual:(id)arg1 withRole:(long long)arg2 ;
-(id)succinctDescription;
-(NSSet *)elements;
-(id)init;
-(BOOL)layoutContainsRole:(long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)displayItemFromLayoutElement:(id)arg1 ;
-(id)elementWithRole:(long long)arg1 ;
-(id)elementWithIdentifier:(id)arg1 ;
-(long long)elementInterfaceOrientation;
-(NSString *)description;
-(long long)interfaceOrientation;
-(unsigned long long)hash;
-(id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)floatingAppLayout;
-(BOOL)isEqual:(id)arg1 ;
@end

