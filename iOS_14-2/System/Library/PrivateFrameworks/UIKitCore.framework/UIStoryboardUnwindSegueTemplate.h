/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@class NSString;

@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate {

	NSString* _action;

}

@property (nonatomic,copy) NSString * action;              //@synthesize action=_action - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)_perform:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1 ;
-(id)_legacyUnwindExecutorForTarget:(id)arg1 ;
@end

