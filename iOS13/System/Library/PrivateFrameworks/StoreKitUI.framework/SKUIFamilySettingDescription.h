/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUISettingDescription.h>

@class SKUISettingsFamilyViewStateCoordinator;

@interface SKUIFamilySettingDescription : SKUISettingDescription {

	SKUISettingsFamilyViewStateCoordinator* _viewStateCoordinator;
	long long _viewState;

}

@property (nonatomic,readonly) long long viewState;              //@synthesize viewState=_viewState - In the implementation block
+(Class)_viewClassForSettingDescription:(id)arg1 ;
-(long long)viewState;
-(BOOL)_initiallyHidden;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)handleSelectionOnCompletion:(/*^block*/id)arg1 ;
-(void)_updateViewState;
-(void)_updateWithViewState:(long long)arg1 ;
@end

