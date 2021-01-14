/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGadget.h>
#import <libobjc.A.dylib/PXSurveyQuestionsGadgetContentViewDelegate.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, PHQuestion, NSSet, PXSurveyQuestionsGadgetContentView, PXSurveyQuestionConfigurationHandlers, UIImage, PXRegionOfInterest, NSString;

@interface PXSurveyQuestionGadget : NSObject <PXGadget, PXSurveyQuestionsGadgetContentViewDelegate> {

	long long _configurationRequestId;
	BOOL _currentlyInOneUp;
	BOOL _contentHidden;
	PXGadgetSpec* _gadgetSpec;
	id<PXGadgetDelegate> _delegate;
	PHQuestion* _question;
	unsigned long long _answer;
	NSSet* _assetUUIDsAssociatedWithGadget;
	PXSurveyQuestionsGadgetContentView* _contentView;
	PXSurveyQuestionConfigurationHandlers* _handlers;

}

@property (nonatomic,retain) PXSurveyQuestionsGadgetContentView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) PXSurveyQuestionConfigurationHandlers * handlers;                       //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) PHQuestion * question;                                                //@synthesize question=_question - In the implementation block
@property (nonatomic,readonly) id<PXSurveyQuestionConfiguration> configuration; 
@property (assign,nonatomic) unsigned long long answer;                                              //@synthesize answer=_answer - In the implementation block
@property (nonatomic,retain) NSSet * assetUUIDsAssociatedWithGadget;                                 //@synthesize assetUUIDsAssociatedWithGadget=_assetUUIDsAssociatedWithGadget - In the implementation block
@property (nonatomic,readonly) UIImage * currentImage; 
@property (nonatomic,readonly) PXRegionOfInterest * regionOfInterestForOneUpTransition; 
@property (assign,nonatomic) BOOL currentlyInOneUp;                                                  //@synthesize currentlyInOneUp=_currentlyInOneUp - In the implementation block
@property (assign,getter=isContentHidden,nonatomic) BOOL contentHidden;                              //@synthesize contentHidden=_contentHidden - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                              //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
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
+(id)sharedWorkQueue;
+(void)preloadResources;
+(unsigned)confirmYesSoundID;
-(PXGadgetSpec *)gadgetSpec;
-(PXSurveyQuestionConfigurationHandlers *)handlers;
-(NSString *)localizedTitle;
-(unsigned long long)gadgetCapabilities;
-(unsigned long long)gadgetType;
-(void)setHandlers:(PXSurveyQuestionConfigurationHandlers *)arg1 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)init;
-(id<PXGadgetDelegate>)delegate;
-(unsigned long long)answer;
-(void)setContentHidden:(BOOL)arg1 ;
-(void)prepareCollectionViewItem:(id)arg1 ;
-(void)removeCollectionViewItem:(id)arg1 ;
-(id)uniqueGadgetIdentifier;
-(Class)collectionViewItemClass;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(id<PXSurveyQuestionConfiguration>)configuration;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PHQuestion *)question;
-(void)setContentView:(PXSurveyQuestionsGadgetContentView *)arg1 ;
-(unsigned long long)hash;
-(UIImage *)currentImage;
-(PXSurveyQuestionsGadgetContentView *)contentView;
-(void)setAnswer:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)gadgetContentView:(id)arg1 didAnswer:(unsigned long long)arg2 withReason:(id)arg3 ;
-(id)initWithSurveyQuestion:(id)arg1 ;
-(PXRegionOfInterest *)regionOfInterestForOneUpTransition;
-(void)_updateSurveyQuestionStateFromAnswer:(unsigned long long)arg1 ;
-(void)_didFinishUpdatingSurveyQuestionStateFromAnswer;
-(void)_playConfirmYesSound;
-(NSSet *)assetUUIDsAssociatedWithGadget;
-(void)setAssetUUIDsAssociatedWithGadget:(NSSet *)arg1 ;
-(BOOL)currentlyInOneUp;
-(void)setCurrentlyInOneUp:(BOOL)arg1 ;
-(BOOL)isContentHidden;
@end

