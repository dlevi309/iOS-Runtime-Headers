/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUConfigurationViewController <NSObject>
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL isFinalStep; 
@optional
-(BOOL)isFinalStep;
-(void)setIsFinalStep:(BOOL)arg1;

@required
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

