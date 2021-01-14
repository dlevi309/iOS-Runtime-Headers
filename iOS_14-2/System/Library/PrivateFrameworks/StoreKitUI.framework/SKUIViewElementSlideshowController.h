/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUISlideshowViewControllerDataSource.h>
#import <libobjc.A.dylib/SKUISlideshowViewControllerDelegate.h>

@protocol SKUIViewElementSlideshowDelegate;
@class SKUIViewElementLayoutContext, NSMutableArray, SKUISlideshowViewController, SKUIIPhoneSlideshowViewController, NSString;

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate> {

	id<SKUIViewElementSlideshowDelegate> _delegate;
	SKUIViewElementLayoutContext* _layoutContext;
	NSMutableArray* _lockups;
	SKUISlideshowViewController* _padViewController;
	SKUIIPhoneSlideshowViewController* _phoneViewController;
	long long _selectedIndex;
	NSString* _title;
	NSMutableArray* _dataConsumers;

}

@property (nonatomic,retain) NSMutableArray * dataConsumers;                                    //@synthesize dataConsumers=_dataConsumers - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIViewElementSlideshowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIViewElementLayoutContext * layoutContext;                      //@synthesize layoutContext=_layoutContext - In the implementation block
@property (nonatomic,readonly) long long numberOfSlideshowItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUIViewElementSlideshowDelegate>)delegate;
-(SKUIViewElementLayoutContext *)layoutContext;
-(void)setLayoutContext:(SKUIViewElementLayoutContext *)arg1 ;
-(void)setDelegate:(id<SKUIViewElementSlideshowDelegate>)arg1 ;
-(void)dealloc;
-(void)presentFromParentViewController:(id)arg1 ;
-(void)setDataConsumers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dataConsumers;
-(long long)numberOfItemsInSlideshowViewController:(id)arg1 ;
-(id)slideshowViewController:(id)arg1 dataConsumerAtIndex:(long long)arg2 ;
-(id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2 ;
-(id)slideshowViewController:(id)arg1 placeholderImageAtIndex:(long long)arg2 ;
-(void)slideshowViewControllerDidFinish:(id)arg1 ;
-(id)initWithShelf:(id)arg1 selectedLockup:(id)arg2 ;
-(long long)numberOfSlideshowItems;
@end

