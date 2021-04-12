/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMenuElement.h>
#import <UIKitCore/_UIMenuLeaf.h>

@protocol UIDeferredMenuElementDelegate;
@class NSString, UIImage, NSArray;

@interface UIDeferredMenuElement : UIMenuElement <_UIMenuLeaf> {

	BOOL _requiresAuthenticatedInput;
	BOOL _fulfilled;
	unsigned long long _attributes;
	NSString* _discoverabilityTitle;
	long long _state;
	/*^block*/id _elementProvider;
	id _metadata;
	id<UIDeferredMenuElementDelegate> _delegate;
	NSArray* _fulfilledElements;

}

@property (nonatomic,copy) id elementProvider;                                               //@synthesize elementProvider=_elementProvider - In the implementation block
@property (nonatomic,retain) id metadata;                                                    //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic,__weak) id<UIDeferredMenuElementDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fulfilledElements;                             //@synthesize fulfilledElements=_fulfilledElements - In the implementation block
@property (nonatomic,readonly) BOOL fulfilled;                                               //@synthesize fulfilled=_fulfilled - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle;                                  //@synthesize discoverabilityTitle=_discoverabilityTitle - In the implementation block
@property (assign,nonatomic) unsigned long long attributes;                                  //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput;                              //@synthesize requiresAuthenticatedInput=_requiresAuthenticatedInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)elementWithProvider:(/*^block*/id)arg1 ;
-(id)_leafKeyInput;
-(void)setDiscoverabilityTitle:(NSString *)arg1 ;
-(id<UIDeferredMenuElementDelegate>)delegate;
-(NSString *)discoverabilityTitle;
-(void)setAttributes:(unsigned long long)arg1 ;
-(BOOL)isLeaf;
-(void)_fulfill;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isDefaultCommand;
-(void)setMetadata:(id)arg1 ;
-(BOOL)fulfilled;
-(unsigned long long)attributes;
-(void)setDelegate:(id<UIDeferredMenuElementDelegate>)arg1 ;
-(NSString *)description;
-(id)_resolvedTargetFromFirstTarget:(id)arg1 ;
-(long long)_leafKeyModifierFlags;
-(id)_immutableCopy;
-(BOOL)requiresAuthenticatedInput;
-(void)setElementProvider:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)elementProvider;
-(long long)state;
-(void)_performWithTarget:(id)arg1 ;
-(NSArray *)fulfilledElements;
-(BOOL)isLoadingPlaceholder;
-(id)_leafAlternates;
-(void)_acceptMenuVisit:(/*^block*/id)arg1 commandVisit:(/*^block*/id)arg2 actionVisit:(/*^block*/id)arg3 deferredElementVisit:(/*^block*/id)arg4 ;
-(id)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3 ;
@end

