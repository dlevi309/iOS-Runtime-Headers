/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMemoryViewPresentationDelegate.h>
#import <libobjc.A.dylib/PXSurveyQuestionConfiguration.h>

@class PXMemoryView, NSString, PHPhotoLibrary, PXSurveyQuestionConfigurationHandlers, PHMemory, UIView, UIImage;

@interface PXSurveyQuestionMemoryConfiguration : NSObject <PXMemoryViewPresentationDelegate, PXSurveyQuestionConfiguration> {

	PXMemoryView* _memoryView;
	NSString* _customKeyAssetIdentifier;
	PHPhotoLibrary* _photoLibrary;
	NSString* _title;
	PXSurveyQuestionConfigurationHandlers* _handlers;
	PHMemory* _memory;
	NSString* _songAdamId;

}

@property (nonatomic,readonly) PHMemory * memory;                                           //@synthesize memory=_memory - In the implementation block
@property (nonatomic,readonly) NSString * songAdamId;                                       //@synthesize songAdamId=_songAdamId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIImage * contentImageForOneUp; 
@property (nonatomic,readonly) CGRect contentRectForOneUp; 
@property (nonatomic,retain) PXSurveyQuestionConfigurationHandlers * handlers;              //@synthesize handlers=_handlers - In the implementation block
-(PXSurveyQuestionConfigurationHandlers *)handlers;
-(PHMemory *)memory;
-(void)setHandlers:(PXSurveyQuestionConfigurationHandlers *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)presentDetailsForMemoryView:(id)arg1 ;
-(NSString *)songAdamId;
-(id)initWithTitle:(id)arg1 memory:(id)arg2 songAdamId:(id)arg3 customKeyAssetIdentifier:(id)arg4 ;
-(id)init;
-(void)layoutContentViewInRect:(CGRect)arg1 ;
-(UIImage *)contentImageForOneUp;
-(CGRect)contentRectForOneUp;
-(UIView *)contentView;
-(NSString *)title;
@end

