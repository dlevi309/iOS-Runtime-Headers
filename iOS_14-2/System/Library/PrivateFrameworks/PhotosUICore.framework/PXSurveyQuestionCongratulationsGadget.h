/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGadget.h>
#import <libobjc.A.dylib/PXSurveyQuestionCongratulationsGadgetContentViewDelegate.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, PXSurveyQuestionsCongratulationsGadgetContentView, NSString;

@interface PXSurveyQuestionCongratulationsGadget : NSObject <PXGadget, PXSurveyQuestionCongratulationsGadgetContentViewDelegate> {

	PXGadgetSpec* _gadgetSpec;
	id<PXGadgetDelegate> _delegate;
	PXSurveyQuestionsCongratulationsGadgetContentView* _contentView;
	unsigned long long _type;

}

@property (nonatomic,retain) PXSurveyQuestionsCongratulationsGadgetContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                    //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXGadgetSpec *)gadgetSpec;
-(id)initWithType:(unsigned long long)arg1 ;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(id)uniqueGadgetIdentifier;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(void)congratulationsGadgetContentViewDidSelectActionButton:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(PXSurveyQuestionsCongratulationsGadgetContentView *)arg1 ;
-(unsigned long long)type;
-(PXSurveyQuestionsCongratulationsGadgetContentView *)contentView;
@end

