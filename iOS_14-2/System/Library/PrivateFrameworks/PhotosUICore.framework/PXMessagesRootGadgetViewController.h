/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetUIViewController.h>

@class PXMessagesGadgetDataSourceManager;

@interface PXMessagesRootGadgetViewController : PXGadgetUIViewController {

	PXMessagesGadgetDataSourceManager* _messagesDataSourceManager;

}

@property (assign,nonatomic) double recentPhotosHeight; 
@property (nonatomic,readonly) PXMessagesGadgetDataSourceManager * messagesDataSourceManager;              //@synthesize messagesDataSourceManager=_messagesDataSourceManager - In the implementation block
+(Class)gadgetSpecClass;
-(id)initWithGadgetDataSourceManager:(id)arg1 ;
-(void)prepareForPresentationStyle:(long long)arg1 ;
-(PXMessagesGadgetDataSourceManager *)messagesDataSourceManager;
-(void)viewDidLoad;
-(void)setRecentPhotosHeight:(double)arg1 ;
-(double)recentPhotosHeight;
@end

