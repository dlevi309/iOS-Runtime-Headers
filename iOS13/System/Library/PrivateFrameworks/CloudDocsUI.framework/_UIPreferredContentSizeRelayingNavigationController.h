/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/_UIPreferredContentSizeRelayingContainer.h>

@class NSString;

@interface _UIPreferredContentSizeRelayingNavigationController : UINavigationController <_UIPreferredContentSizeRelayingContainer> {

	/*^block*/id _preferredContentSizeDidChange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (nonatomic,copy) id preferredContentSizeDidChange;              //@synthesize preferredContentSizeDidChange=_preferredContentSizeDidChange - In the implementation block
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)preferredContentSizeDidChange;
-(void)setPreferredContentSizeDidChange:(id)arg1 ;
@end

