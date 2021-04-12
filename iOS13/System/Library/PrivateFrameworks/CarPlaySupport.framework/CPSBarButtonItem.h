/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIBarButtonItem.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>

@protocol CPSButtonDelegate;
@class NSUUID, NSString;

@interface CPSBarButtonItem : UIBarButtonItem <CPSButtonDelegate> {

	NSUUID* _identifier;
	id<CPSButtonDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CPSButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEnabled:(BOOL)arg1 ;
-(id<CPSButtonDelegate>)delegate;
-(void)setDelegate:(id<CPSButtonDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)setTitle:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)didSelectButton:(id)arg1 ;
-(id)initWithCPBarButton:(id)arg1 ;
-(id)_initWithCPBarButton:(id)arg1 showBackIndicator:(BOOL)arg2 ;
@end

