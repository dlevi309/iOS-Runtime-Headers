/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

