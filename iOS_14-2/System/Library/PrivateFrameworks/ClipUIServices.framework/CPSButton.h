/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/CPSControl.h>

@protocol CPSButtonDelegate;
@class NSUUID, UITapGestureRecognizer, NSString;

@interface CPSButton : UIButton <CPSControl> {

	NSUUID* _identifier;
	id<CPSButtonDelegate> _delegate;
	UITapGestureRecognizer* _pressTapRecognizer;
	UITapGestureRecognizer* _touchTapRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * pressTapRecognizer;              //@synthesize pressTapRecognizer=_pressTapRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * touchTapRecognizer;              //@synthesize touchTapRecognizer=_touchTapRecognizer - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CPSButtonDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithType:(long long)arg1 ;
-(id<CPSButtonDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(void)setDelegate:(id<CPSButtonDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)_addGestureRecognizers;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)setPressTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)pressTapRecognizer;
-(void)setTouchTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)touchTapRecognizer;
-(void)buttonSelected:(id)arg1 interactionModel:(unsigned long long)arg2 ;
@end
