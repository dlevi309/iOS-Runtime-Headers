/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKActivityObserving.h>

@protocol UGCCallToActionEditAccessoryViewDelegate;
@class UIButton, UIActivityIndicatorView, NSString;

@interface MKUGCCallToActionEditAccessoryView : UIView <MKActivityObserving> {

	UIButton* _editButton;
	UIActivityIndicatorView* _spinner;
	id<UGCCallToActionEditAccessoryViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UGCCallToActionEditAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<UGCCallToActionEditAccessoryViewDelegate>)delegate;
-(void)setDelegate:(id<UGCCallToActionEditAccessoryViewDelegate>)arg1 ;
-(void)_contentSizeChanged;
-(void)_setupEditButton;
-(void)_editButtonPressed;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg1 ;
@end

