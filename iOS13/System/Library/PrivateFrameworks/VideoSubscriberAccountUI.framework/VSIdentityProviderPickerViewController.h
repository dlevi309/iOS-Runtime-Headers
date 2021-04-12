/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

@class NSArray, NSString, UISearchController;


@protocol VSIdentityProviderPickerViewController <NSObject>
@property (assign,nonatomic,__weak) id<VSIdentityProviderPickerViewControllerDelegate> delegate; 
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed; 
@property (nonatomic,copy) NSArray * identityProviders; 
@property (assign,nonatomic) unsigned long long additionalProvidersMode; 
@property (nonatomic,copy) NSString * requestingAppDisplayName; 
@property (nonatomic,copy) NSString * resourceTitle; 
@property (nonatomic,readonly) UISearchController * searchController; 
@optional
-(UISearchController *)searchController;

@required
-(id<VSIdentityProviderPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)requestingAppDisplayName;
-(void)setRequestingAppDisplayName:(id)arg1;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1;
-(void)setIdentityProviders:(id)arg1;
-(void)deselectSelectedProviderAnimated:(BOOL)arg1;
-(void)setResourceTitle:(id)arg1;
-(void)setAdditionalProvidersMode:(unsigned long long)arg1;
-(unsigned long long)additionalProvidersMode;
-(NSString *)resourceTitle;
-(NSArray *)identityProviders;

@end
