/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLUIImageViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSDictionary, UIImagePickerController, UINavigationItem, NSString;

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSDictionary* _options;
	UIImagePickerController* _imagePicker;
	UINavigationItem* _navItem;
	id _delegate;
	Class _viewClass;
	unsigned _canCreateMetadata;
	BOOL _parentInPopoverException;

}

@property (assign,nonatomic) BOOL parentInPopoverException;              //@synthesize parentInPopoverException=_parentInPopoverException - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProperties:(id)arg1 ;
-(id)navigationItem;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)initWithVideoURL:(id)arg1 trimTitle:(id)arg2 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(void)setImagePickerOptions:(id)arg1 ;
-(void)setParentInPopoverException:(BOOL)arg1 ;
-(id)initWithPhoto:(id)arg1 trimTitle:(id)arg2 ;
-(Class)_viewClass;
-(BOOL)_displaysFullScreen;
-(int)cropOverlayMode;
-(void)loadView;
-(CGRect)previewFrame;
-(void)dealloc;
-(double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2 ;
-(void)videoViewPlaybackDidFail:(id)arg1 ;
-(BOOL)videoViewCanCreateMetadata:(id)arg1 ;
-(id)uiipc_imagePickerController;
-(id)uiipc_imagePickerOptions;
-(BOOL)_editingForThirdParty;
-(void)_setupNavigationItemAndTrimTitle:(id)arg1 ;
-(id)_trimMessage;
-(void)setViewClass:(Class)arg1 ;
-(void)didChooseVideoAtURL:(id)arg1 options:(id)arg2 ;
-(void)_cancelTrim:(id)arg1 ;
-(void)_trimVideo:(id)arg1 ;
-(BOOL)parentInPopoverException;
@end

