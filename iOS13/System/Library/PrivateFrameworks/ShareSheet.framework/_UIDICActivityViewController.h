/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivityViewController.h>

@protocol _UIDICActivityViewControllerDelegate;
@class UIDocumentInteractionController, NSString;

@interface _UIDICActivityViewController : UIActivityViewController {

	BOOL _isPerformingActivity;
	UIDocumentInteractionController*<_UIDICActivityViewControllerDelegate> _documentInteractionActivityDelegate;
	unsigned long long _options;
	id<_UIDICActivityViewControllerDelegate> _documentInteractionActivityDelegateRetained;
	NSString* _openActivityTargetApplicationIdentifier;

}

@property (assign,nonatomic) unsigned long long options;                                                                                                     //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id<_UIDICActivityViewControllerDelegate> documentInteractionActivityDelegateRetained;                                           //@synthesize documentInteractionActivityDelegateRetained=_documentInteractionActivityDelegateRetained - In the implementation block
@property (assign,nonatomic) BOOL isPerformingActivity;                                                                                                      //@synthesize isPerformingActivity=_isPerformingActivity - In the implementation block
@property (nonatomic,retain) NSString * openActivityTargetApplicationIdentifier;                                                                             //@synthesize openActivityTargetApplicationIdentifier=_openActivityTargetApplicationIdentifier - In the implementation block
@property (assign,nonatomic,__weak) UIDocumentInteractionController*<_UIDICActivityViewControllerDelegate> documentInteractionActivityDelegate;              //@synthesize documentInteractionActivityDelegate=_documentInteractionActivityDelegate - In the implementation block
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2 ;
-(void)_performActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(BOOL)_shouldShowSystemActivityType:(id)arg1 ;
-(void)setDocumentInteractionActivityDelegate:(UIDocumentInteractionController*<_UIDICActivityViewControllerDelegate>)arg1 ;
-(BOOL)isPerformingActivity;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_handleDidFinishPerformingActivityType:(id)arg1 completed:(BOOL)arg2 resultItems:(id)arg3 activityError:(id)arg4 ;
-(BOOL)hidesSystemActivities;
-(UIDocumentInteractionController*<_UIDICActivityViewControllerDelegate>)documentInteractionActivityDelegate;
-(void)setDocumentInteractionActivityDelegateRetained:(id<_UIDICActivityViewControllerDelegate>)arg1 ;
-(void)setIsPerformingActivity:(BOOL)arg1 ;
-(id<_UIDICActivityViewControllerDelegate>)documentInteractionActivityDelegateRetained;
-(NSString *)openActivityTargetApplicationIdentifier;
-(void)setOpenActivityTargetApplicationIdentifier:(NSString *)arg1 ;
@end

