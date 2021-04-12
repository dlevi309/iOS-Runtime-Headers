/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <UIKitCore/UIBarButtonItem.h>

@class NSString, QLPreviewController, QLToolbarButton;

@interface QLToolbarButtonItemRepresentation : UIBarButtonItem {

	BOOL _disappearsOnTap;
	NSString* _identifier;
	unsigned long long _placement;
	QLPreviewController* _presentingViewController;
	QLToolbarButton* _originalButton;

}

@property (retain) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long placement;                                //@synthesize placement=_placement - In the implementation block
@property (assign) BOOL disappearsOnTap;                                        //@synthesize disappearsOnTap=_disappearsOnTap - In the implementation block
@property (__weak) QLToolbarButton * originalButton;                            //@synthesize originalButton=_originalButton - In the implementation block
@property (__weak) QLPreviewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(QLPreviewController *)presentingViewController;
-(unsigned long long)placement;
-(void)setPlacement:(unsigned long long)arg1 ;
-(void)setPresentingViewController:(QLPreviewController *)arg1 ;
-(void)setDisappearsOnTap:(BOOL)arg1 ;
-(BOOL)disappearsOnTap;
-(QLToolbarButton *)originalButton;
-(void)setOriginalButton:(QLToolbarButton *)arg1 ;
@end

