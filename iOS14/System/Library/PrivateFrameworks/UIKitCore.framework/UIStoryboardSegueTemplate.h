/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIViewController;

@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {

	NSString* _identifier;
	NSString* _segueClassName;
	UIViewController* _viewController;
	NSString* _destinationViewControllerIdentifier;
	SEL _prepareForChildViewControllerSelector;
	BOOL _performOnViewLoad;
	BOOL _animates;

}

@property (assign,nonatomic) BOOL performOnViewLoad;                                                  //@synthesize performOnViewLoad=_performOnViewLoad - In the implementation block
@property (assign,nonatomic) BOOL animates;                                                           //@synthesize animates=_animates - In the implementation block
@property (nonatomic,retain) NSString * customPrepareForChildViewControllerSelectorName; 
@property (nonatomic,readonly) SEL prepareForChildViewControllerSelector; 
@property (nonatomic,readonly) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                //@synthesize viewController=_viewController - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)animates;
-(id)perform:(id)arg1 ;
-(id)_perform:(id)arg1 ;
-(UIViewController *)viewController;
-(SEL)prepareForChildViewControllerSelector;
-(id)initWithCoder:(id)arg1 ;
-(void)setAnimates:(BOOL)arg1 ;
-(/*^block*/id)newDefaultPrepareHandlerForSegue:(id)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)customPrepareForChildViewControllerSelectorName;
-(void)setPerformOnViewLoad:(BOOL)arg1 ;
-(void)setCustomPrepareForChildViewControllerSelectorName:(NSString *)arg1 ;
-(BOOL)performOnViewLoad;
@end

