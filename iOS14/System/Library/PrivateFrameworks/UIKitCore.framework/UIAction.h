/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMenuElement.h>
#import <UIKitCore/_UIMenuLeaf.h>

@class NSString, UIImage;

@interface UIAction : UIMenuElement <_UIMenuLeaf> {

	BOOL _requiresAuthenticatedInput;
	NSString* _discoverabilityTitle;
	NSString* _identifier;
	unsigned long long _attributes;
	long long _state;
	id _sender;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                       //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle;                  //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id sender;                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput;              //@synthesize requiresAuthenticatedInput=_requiresAuthenticatedInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)actionWithHandler:(/*^block*/id)arg1 ;
-(id)_spiRepresentation;
-(id)sender;
-(id)_leafKeyInput;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(NSString *)discoverabilityTitle;
-(void)setAttributes:(unsigned long long)arg1 ;
-(BOOL)isLeaf;
-(id)initWithAction:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)_isDefaultCommand;
-(void)_performActionWithSender:(id)arg1 ;
-(unsigned long long)attributes;
-(NSString *)description;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(long long)_leafKeyModifierFlags;
-(id)_immutableCopy;
-(BOOL)requiresAuthenticatedInput;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 discoverabilityTitle:(id)arg4 attributes:(unsigned long long)arg5 state:(long long)arg6 handler:(/*^block*/id)arg7 ;
-(void)_performWithTarget:(id)arg1 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(NSString *)identifier;
-(id)_leafAlternates;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(id)handler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

