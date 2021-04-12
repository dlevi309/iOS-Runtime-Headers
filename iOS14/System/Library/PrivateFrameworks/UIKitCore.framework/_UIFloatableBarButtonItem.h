/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIView;

@interface _UIFloatableBarButtonItem : UIBarButtonItem {

	BOOL _floatable;
	BOOL _floating;
	UIView* _configuredFloatableView;
	UIView* _referenceView;

}

@property (assign,setter=_setFloatable:,getter=_isFloatable,nonatomic) BOOL _floatable;                          //@synthesize floatable=_floatable - In the implementation block
@property (assign,setter=_setFloating:,getter=_isFloating,nonatomic) BOOL _floating;                             //@synthesize floating=_floating - In the implementation block
@property (setter=_setConfiguredFloatableView:,nonatomic,retain) UIView * _configuredFloatableView;              //@synthesize configuredFloatableView=_configuredFloatableView - In the implementation block
@property (setter=_setReferenceView:,nonatomic,retain) UIView * _referenceView;                                  //@synthesize referenceView=_referenceView - In the implementation block
-(id)description;
-(BOOL)_isFloating;
-(BOOL)_isFloatable;
-(void)_setFloating:(BOOL)arg1 ;
-(UIView *)_configuredFloatableView;
-(UIView *)_referenceView;
-(void)_setFloatable:(BOOL)arg1 ;
-(void)_setConfiguredFloatableView:(id)arg1 ;
-(void)_setReferenceView:(id)arg1 ;
@end

