/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,readonly) id _target;                               //@synthesize _target=__target - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle;              //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
@property (nonatomic,readonly) SEL action;                               //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id propertyList;                          //@synthesize propertyList=_propertyList - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long state;                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSArray * alternates;                     //@synthesize alternates=_alternates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 ;
+(id)_defaultCommands;
+(id)_defaultCommandForAction:(SEL)arg1 ;
+(id)commandWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(id)_target;
-(unsigned long long)attributes;
-(id)propertyList;
-(long long)state;
-(void)setAttributes:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(SEL)action;
-(void)setState:(long long)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)discoverabilityTitle;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
-(id)_immutableCopy;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(void)_performWithTarget:(id)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(unsigned long long)arg7 state:(long long)arg8 ;
-(id)initWithCommand:(id)arg1 ;
-(id)_leafKeyInput;
-(long long)_leafKeyModifierFlags;
-(id)_leafAlternates;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3 ;
-(id)_alternateForModifierFlags:(long long)arg1 ;
-(NSArray *)alternates;
@end

