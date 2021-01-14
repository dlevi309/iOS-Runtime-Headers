/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXPerson;
@class UIView, UILabel, UIActivityIndicatorView;

@interface PXPeopleConfirmationLoadingView : UIView {

	unsigned long long _loadingState;
	UIView* _loadingStatusView;
	UILabel* _noneFoundLabel;
	UIActivityIndicatorView* _loadingIndicator;
	id<PXPerson> _person;

}

@property (nonatomic,readonly) UIView * loadingStatusView;                              //@synthesize loadingStatusView=_loadingStatusView - In the implementation block
@property (nonatomic,readonly) UILabel * noneFoundLabel;                                //@synthesize noneFoundLabel=_noneFoundLabel - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) id<PXPerson> person;                                     //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) unsigned long long loadingState;                           //@synthesize loadingState=_loadingState - In the implementation block
-(id<PXPerson>)person;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(UIActivityIndicatorView *)loadingIndicator;
-(unsigned long long)loadingState;
-(id)initWithFrame:(CGRect)arg1 person:(id)arg2 localizedName:(id)arg3 ;
-(void)setLoadingState:(unsigned long long)arg1 ;
-(UIView *)loadingStatusView;
-(UILabel *)noneFoundLabel;
@end

