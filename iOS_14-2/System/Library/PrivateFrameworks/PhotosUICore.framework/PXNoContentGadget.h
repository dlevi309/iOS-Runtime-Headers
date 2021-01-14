/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, NSString, PXNoContentGadgetView;

@interface PXNoContentGadget : NSObject <PXGadget> {

	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	NSString* _title;
	NSString* _message;
	double _contentHeightAdjustment;
	PXNoContentGadgetView* _noContentView;
	double _minimumContentHeight;

}

@property (nonatomic,retain) PXNoContentGadgetView * noContentView;                 //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,readonly) double minimumContentHeight;                         //@synthesize minimumContentHeight=_minimumContentHeight - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) double contentHeightAdjustment;                        //@synthesize contentHeightAdjustment=_contentHeightAdjustment - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                             //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXGadgetSpec *)gadgetSpec;
-(void)setMessage:(NSString *)arg1 ;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(NSString *)message;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)init;
-(id<PXGadgetDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 ;
-(void)prepareCollectionViewItem:(id)arg1 ;
-(Class)collectionViewItemClass;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(unsigned long long)accessoryButtonType;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)minimumContentHeight;
-(void)setContentHeightAdjustment:(double)arg1 ;
-(double)contentHeightAdjustment;
-(BOOL)hasLoadedContentData;
-(void)configureWithButtonTitle:(id)arg1 buttonAction:(/*^block*/id)arg2 ;
-(double)preferredHeightForViewController:(id)arg1 ;
-(long long)priority;
-(void)setNoContentView:(PXNoContentGadgetView *)arg1 ;
-(PXNoContentGadgetView *)noContentView;
-(void)setPriority:(long long)arg1 ;
-(NSString *)title;
-(id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 minimumContentHeight:(double)arg3 ;
@end

