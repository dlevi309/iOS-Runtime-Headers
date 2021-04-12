/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSSet *)elements;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)interfaceOrientation;
-(id)elementWithIdentifier:(id)arg1 ;
-(id)elementWithRole:(long long)arg1 ;
-(id)appLayout;
-(long long)elementInterfaceOrientation;
-(id)displayItemFromLayoutElement:(id)arg1 ;
-(id)floatingAppLayout;
-(id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3 ;
-(BOOL)layoutContainsRole:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 withRole:(long long)arg2 ;
@end

