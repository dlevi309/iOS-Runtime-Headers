/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMenuElement.h>
#import <UIKitCore/_UIMenuLeaf.h>

@class NSString, NSArray, UIImage;

@interface UICommand : UIMenuElement <_UIMenuLeaf> {

	NSString* _discoverabilityTitle;
	SEL _action;
	id _propertyList;
	unsigned long long _attributes;
	long long _state;
	NSArray* _alternates;
	id __target;

}

@property (nonatomic,readonly) id _target;                                   //@synthesize _target=__target - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle;                  //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
@property (nonatomic,readonly) SEL action;                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id propertyList;                              //@synthesize propertyList=_propertyList - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSArray * alternates;                         //@synthesize alternates=_alternates - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 ;
+(id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 ;
+(id)_defaultCommands;
+(id)commandWithTitle:(id)arg1 imageName:(id)arg2 action:(SEL)arg3 ;
+(id)_defaultCommandForAction:(SEL)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(unsigned long long)arg7 state:(long long)arg8 ;
-(id)_leafKeyInput;
-(id)initWithTitle:(id)arg1 image:(id)arg2 imageName:(id)arg3 action:(SEL)arg4 propertyList:(id)arg5 alternates:(id)arg6 discoverabilityTitle:(id)arg7 attributes:(unsigned long long)arg8 state:(long long)arg9 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
-(NSString *)discoverabilityTitle;
-(void)setAttributes:(unsigned long long)arg1 ;
-(id)initWithCommand:(id)arg1 ;
-(BOOL)isLeaf;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)_isDefaultCommand;
-(SEL)action;
-(id)_target;
-(unsigned long long)attributes;
-(NSString *)description;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(long long)_leafKeyModifierFlags;
-(id)_immutableCopy;
-(BOOL)requiresAuthenticatedInput;
-(NSArray *)alternates;
-(id)_identifier;
-(id)_alternateForModifierFlags:(long long)arg1 ;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)_performWithTarget:(id)arg1 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(id)_leafAlternates;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(id)propertyList;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

