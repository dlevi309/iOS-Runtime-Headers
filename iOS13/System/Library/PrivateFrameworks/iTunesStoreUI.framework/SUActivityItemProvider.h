/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <ShareSheet/UIActivityItemProvider.h>

@protocol SUActivityItemProviderDelegate, OS_dispatch_queue;
@class UIActivity, NSObject, UIImage;

@interface SUActivityItemProvider : UIActivityItemProvider {

	UIActivity* _activity;
	id<SUActivityItemProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id _lastProvidedItem;
	UIImage* _previewImage;

}

@property (__weak) id<SUActivityItemProviderDelegate> delegate; 
@property (setter=setSUActivity:,retain) UIActivity * suActivity; 
@property (readonly) id suLastProvidedItem; 
@property (setter=setSUPreviewImage:,retain) UIImage * suPreviewImage; 
-(void)dealloc;
-(id<SUActivityItemProviderDelegate>)delegate;
-(void)setDelegate:(id<SUActivityItemProviderDelegate>)arg1 ;
-(id)item;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(void)setSUActivity:(id)arg1 ;
-(id)suLastProvidedItem;
-(UIImage *)suPreviewImage;
-(UIActivity *)suActivity;
-(void)setSUPreviewImage:(id)arg1 ;
@end

