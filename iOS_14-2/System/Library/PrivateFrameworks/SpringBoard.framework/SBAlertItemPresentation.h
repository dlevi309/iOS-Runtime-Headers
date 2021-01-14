/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SBAlertItemPresenter;
@class SBAlertItem, NSString;

@interface SBAlertItemPresentation : NSObject <BSDescriptionProviding> {

	SBAlertItem* _alertItem;
	id<SBAlertItemPresenter> _presenter;

}

@property (nonatomic,retain) SBAlertItem * alertItem;                         //@synthesize alertItem=_alertItem - In the implementation block
@property (nonatomic,retain) id<SBAlertItemPresenter> presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)setPresenter:(id<SBAlertItemPresenter>)arg1 ;
-(SBAlertItem *)alertItem;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setAlertItem:(SBAlertItem *)arg1 ;
-(id<SBAlertItemPresenter>)presenter;
-(NSString *)description;
-(id)initWithAlertItem:(id)arg1 presenter:(id)arg2 ;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
@end

