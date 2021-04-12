/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/


@protocol PNPPlatterViewController
@property (nonatomic,readonly) unsigned long long preferredEdge; 
@property (assign,nonatomic,__weak) id<PNPPlatterViewControllerPlatterDelegate> platterDelegate; 
@property (nonatomic,readonly) double preferredCornerRadius; 
@optional
-(double)preferredCornerRadius;

@required
-(unsigned long long)preferredEdge;
-(id<PNPPlatterViewControllerPlatterDelegate>)platterDelegate;
-(void)setPlatterDelegate:(id)arg1;

@end

