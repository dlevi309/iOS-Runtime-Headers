/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@protocol PXCMMCloudGadgetViewControllerDelegate;
@class NSArray, NSDate;

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable> {

	unsigned long long _sourceType;
	id<PXCMMCloudGadgetViewControllerDelegate> _gadgetDelegate;
	NSArray* _contentGadgets;

}

@property (nonatomic,copy) NSArray * contentGadgets;                                                        //@synthesize contentGadgets=_contentGadgets - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceType;                                               //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate;              //@synthesize gadgetDelegate=_gadgetDelegate - In the implementation block
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
+(id)new;
-(void)generateGadgets;
-(unsigned long long)gadgetType;
-(unsigned long long)sourceType;
-(id)init;
-(NSDate *)priorityDate;
-(void)resetPriorityDate;
-(long long)defaultPriority;
-(long long)priorityType;
-(unsigned long long)estimatedNumberOfGadgets;
-(id<PXCMMCloudGadgetViewControllerDelegate>)gadgetDelegate;
-(void)setGadgetDelegate:(id<PXCMMCloudGadgetViewControllerDelegate>)arg1 ;
-(NSArray *)contentGadgets;
-(void)setContentGadgets:(NSArray *)arg1 ;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithSourceType:(unsigned long long)arg1 ;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg1 ;
@end

