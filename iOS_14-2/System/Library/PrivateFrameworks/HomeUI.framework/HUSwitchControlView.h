/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate;
@class NSString, UISwitch;

@interface HUSwitchControlView : UIView <HUControlView> {

	NSString* _identifier;
	id<HUControlViewDelegate> _delegate;
	UISwitch* _switchView;

}

@property (nonatomic,readonly) UISwitch * switchView;                                //@synthesize switchView=_switchView - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
-(void)setDisabled:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HUControlViewDelegate>)delegate;
-(BOOL)isDisabled;
-(void)setValue:(id)arg1 ;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)value;
-(UISwitch *)switchView;
-(void)_switchValueChanged:(id)arg1 ;
@end

