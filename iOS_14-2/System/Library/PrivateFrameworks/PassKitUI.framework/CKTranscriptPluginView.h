/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol CKTranscriptPluginView <NSObject>
@property (assign,nonatomic,__weak) id<CKTranscriptPluginViewDelegate> pluginViewDelegate; 
@property (nonatomic,readonly) BOOL wantsOutline; 
@optional
-(BOOL)wantsOutline;
-(id<CKTranscriptPluginViewDelegate>)pluginViewDelegate;
-(void)setPluginViewDelegate:(id)arg1;
-(id)interactiveViews;
-(void)configureForDisplay;

@end

