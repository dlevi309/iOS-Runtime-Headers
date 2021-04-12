/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <UIKitCore/UIContextMenuConfiguration.h>

@class NSURL;

@interface DDContextMenuConfiguration : UIContextMenuConfiguration {

	BOOL prefersActionMenuStyle;
	BOOL expandPreviewOnInteraction;
	/*^block*/id interactionViewControllerProvider;
	NSURL* interactionURL;

}

@property (assign,nonatomic) BOOL prefersActionMenuStyle; 
@property (assign,nonatomic) BOOL expandPreviewOnInteraction; 
@property (nonatomic,copy) id interactionViewControllerProvider; 
@property (nonatomic,retain) NSURL * interactionURL; 
+(id)configurationWithIdentifier:(id)arg1 previewProvider:(/*^block*/id)arg2 actionProvider:(/*^block*/id)arg3 ;
-(BOOL)prefersActionMenuStyle;
-(NSURL *)interactionURL;
-(id)interactionViewControllerProvider;
-(void)setPrefersActionMenuStyle:(BOOL)arg1 ;
-(BOOL)expandPreviewOnInteraction;
-(void)setExpandPreviewOnInteraction:(BOOL)arg1 ;
-(void)setInteractionViewControllerProvider:(id)arg1 ;
-(void)setInteractionURL:(NSURL *)arg1 ;
@end

