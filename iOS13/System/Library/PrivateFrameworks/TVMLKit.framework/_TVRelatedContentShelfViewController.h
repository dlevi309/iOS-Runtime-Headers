/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/__TVShelfViewControllerDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class _TVShelfViewController, NSString;

@interface _TVRelatedContentShelfViewController : UIViewController <__TVShelfViewControllerDelegate, TVAppTemplateImpressionable> {

	_TVShelfViewController* _shelfViewController;

}

@property (nonatomic,retain) _TVShelfViewController * shelfViewController;              //@synthesize shelfViewController=_shelfViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)preferredFocusEnvironments;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(_TVShelfViewController *)shelfViewController;
-(void)shelfViewController:(id)arg1 updateRelatedView:(id)arg2 ;
-(void)setShelfViewController:(_TVShelfViewController *)arg1 ;
@end

