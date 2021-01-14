/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKTextInputDebugStateIntrospectorDelegate;
@class PKTextInputInteraction;

@interface PKTextInputDebugStateIntrospector : NSObject {

	PKTextInputInteraction* _interaction;
	id<PKTextInputDebugStateIntrospectorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) PKTextInputInteraction * interaction;                              //@synthesize interaction=_interaction - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputDebugStateIntrospectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)debugStateDidChange;
+(id)debugStateLineDescriptionForIntrospectable:(id)arg1 ;
+(id)_knownInstances;
-(id<PKTextInputDebugStateIntrospectorDelegate>)delegate;
-(id)initWithInteraction:(id)arg1 ;
-(void)setDelegate:(id<PKTextInputDebugStateIntrospectorDelegate>)arg1 ;
-(PKTextInputInteraction *)interaction;
-(void)dealloc;
-(id)fullDebugStateDescription;
-(id)debugStateKeys;
-(id)debugStateTitleForStateKey:(id)arg1 ;
-(id)debugStateDescriptionForStateKey:(id)arg1 ;
-(BOOL)debugStateCanShowDetailsForStateKey:(id)arg1 ;
-(id)debugStateDetailViewControllerForStateKey:(id)arg1 ;
-(void)_debugStateDidChange;
-(id)_introspectableForStateKey:(id)arg1 ;
@end

