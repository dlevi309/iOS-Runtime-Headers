/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMenuElement.h>
#import <UIKitCore/_UIMenuLeaf.h>

@class NSString, UIImage;

@interface UIAction : UIMenuElement <_UIMenuLeaf> {

	NSString* _discoverabilityTitle;
	NSString* _identifier;
	unsigned long long _attributes;
	long long _state;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle;              //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long state;                            //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)attributes;
-(void)setHandler:(id)arg1 ;
-(long long)state;
-(void)setAttributes:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(NSString *)discoverabilityTitle;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
-(void)_performAction;
-(id)_immutableCopy;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 ;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(BOOL)_acceptBoolMenuVisit:(/*^block*/id)arg1 leafVisit:(/*^block*/id)arg2 ;
-(id)_spiRepresentation;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(void)_performWithTarget:(id)arg1 ;
-(id)_leafKeyInput;
-(long long)_leafKeyModifierFlags;
-(id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 discoverabilityTitle:(id)arg4 attributes:(unsigned long long)arg5 state:(long long)arg6 handler:(/*^block*/id)arg7 ;
-(id)_leafAlternates;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3 ;
@end

