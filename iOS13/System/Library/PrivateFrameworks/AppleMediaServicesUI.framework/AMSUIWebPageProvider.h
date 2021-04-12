/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

@class AMSUIWebNavigationBarModel;


@protocol AMSUIWebPageProvider <NSObject>
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar; 
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@required
-(AMSUIWebNavigationBarModel *)navigationBar;
-(id)createViewController;
-(BOOL)disableReappearPlaceholder;

@end

