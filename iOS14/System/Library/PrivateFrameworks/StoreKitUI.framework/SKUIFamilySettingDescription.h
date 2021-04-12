/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)handleSelectionOnCompletion:(/*^block*/id)arg1 ;
-(BOOL)_initiallyHidden;
-(void)_updateViewState;
-(void)_updateWithViewState:(long long)arg1 ;
@end

