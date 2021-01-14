/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKAdaptivePresentedControllerProtocol <NSObject>
@property (assign,nonatomic) BOOL wantsWindowedPresentation; 
@property (assign,nonatomic) BOOL preserveModalPresentationStyle; 
@property (assign,nonatomic) BOOL shouldHidePresentingWindow; 
@optional
-(BOOL)constrainToPresentingVCBounds;
-(BOOL)forceWindowedPresentation;
-(BOOL)shouldHidePresentingWindow;
-(void)setShouldHidePresentingWindow:(BOOL)arg1;

@required
-(BOOL)wantsWindowedPresentation;
-(void)setWantsWindowedPresentation:(BOOL)arg1;
-(BOOL)preserveModalPresentationStyle;
-(void)setPreserveModalPresentationStyle:(BOOL)arg1;

@end

