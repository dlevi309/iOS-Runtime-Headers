/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)perform:(id)arg1 ;
-(BOOL)performOnViewLoad;
-(id)_perform:(id)arg1 ;
-(SEL)prepareForChildViewControllerSelector;
-(/*^block*/id)newDefaultPrepareHandlerForSegue:(id)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1 ;
-(BOOL)animates;
-(NSString *)customPrepareForChildViewControllerSelectorName;
-(void)setCustomPrepareForChildViewControllerSelectorName:(NSString *)arg1 ;
-(void)setPerformOnViewLoad:(BOOL)arg1 ;
-(void)setAnimates:(BOOL)arg1 ;
@end

