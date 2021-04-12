/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@class NSString;

@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate {

	NSString* _action;

}

@property (nonatomic,copy) NSString * action;              //@synthesize action=_action - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)_perform:(id)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1 ;
-(id)_legacyUnwindExecutorForTarget:(id)arg1 ;
@end

