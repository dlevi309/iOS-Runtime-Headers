/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIBarButtonItem.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>

@protocol CPSButtonDelegate;
@class NSUUID, CPBarButton, NSString;

@interface CPSBarButtonItem : UIBarButtonItem <CPSButtonDelegate> {

	NSUUID* _identifier;
	CPBarButton* _barButton;
	id<CPSButtonDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) CPBarButton * barButton;                          //@synthesize barButton=_barButton - In the implementation block
@property (assign,nonatomic,__weak) id<CPSButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(id)arg1 ;
-(CPBarButton *)barButton;
-(id<CPSButtonDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setDelegate:(id<CPSButtonDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)didSelectButton:(id)arg1 ;
-(id)initWithCPBarButton:(id)arg1 ;
-(id)_initWithCPBarButton:(id)arg1 showBackIndicator:(BOOL)arg2 ;
@end

