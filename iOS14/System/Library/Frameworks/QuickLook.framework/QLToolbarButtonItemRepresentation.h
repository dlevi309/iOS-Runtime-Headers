/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <UIKitCore/UIBarButtonItem.h>

@class NSString, QLPreviewController, QLToolbarButton, UILongPressGestureRecognizer;

@interface QLToolbarButtonItemRepresentation : UIBarButtonItem {

	BOOL _disappearsOnTap;
	NSString* _identifier;
	unsigned long long _placement;
	QLPreviewController* _presentingViewController;
	QLToolbarButton* _originalButton;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (retain) NSString * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long placement;                                                     //@synthesize placement=_placement - In the implementation block
@property (assign) BOOL disappearsOnTap;                                                             //@synthesize disappearsOnTap=_disappearsOnTap - In the implementation block
@property (__weak) QLToolbarButton * originalButton;                                                 //@synthesize originalButton=_originalButton - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (__weak) QLPreviewController * presentingViewController;                                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(unsigned long long)placement;
-(void)setDisappearsOnTap:(BOOL)arg1 ;
-(void)setPlacement:(unsigned long long)arg1 ;
-(QLToolbarButton *)originalButton;
-(void)setLongPressTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setOriginalButton:(QLToolbarButton *)arg1 ;
-(QLPreviewController *)presentingViewController;
-(void)setPresentingViewController:(QLPreviewController *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)disappearsOnTap;
-(BOOL)isEqual:(id)arg1 ;
@end

