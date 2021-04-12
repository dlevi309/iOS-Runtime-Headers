/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBAlertItemPresenter;
@class SBAlertItem;

@interface SBAlertItemPresentation : NSObject {

	SBAlertItem* _alertItem;
	id<SBAlertItemPresenter> _presenter;

}

@property (nonatomic,retain) SBAlertItem * alertItem;                         //@synthesize alertItem=_alertItem - In the implementation block
@property (nonatomic,retain) id<SBAlertItemPresenter> presenter;              //@synthesize presenter=_presenter - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<SBAlertItemPresenter>)presenter;
-(SBAlertItem *)alertItem;
-(void)setAlertItem:(SBAlertItem *)arg1 ;
-(void)setPresenter:(id<SBAlertItemPresenter>)arg1 ;
-(id)initWithAlertItem:(id)arg1 presenter:(id)arg2 ;
@end

