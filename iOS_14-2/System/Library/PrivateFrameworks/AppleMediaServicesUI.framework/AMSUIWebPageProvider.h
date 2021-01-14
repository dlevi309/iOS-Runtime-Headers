/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

@class AMSUIWebNavigationBarModel, NSString;


@protocol AMSUIWebPageProvider <AMSUIWebModelInterface>
@property (nonatomic,readonly) AMSUIWebNavigationBarModel * navigationBar; 
@property (nonatomic,readonly) NSString * backgroundColor; 
@property (nonatomic,readonly) BOOL disableReappearPlaceholder; 
@property (nonatomic,readonly) CGSize windowSize; 
@required
-(CGSize)windowSize;
-(AMSUIWebNavigationBarModel *)navigationBar;
-(NSString *)backgroundColor;
-(id)createViewController;
-(BOOL)disableReappearPlaceholder;

@end

