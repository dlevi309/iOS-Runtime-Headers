/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

@class NSString;


@protocol BNBannerSourceProviding <BSInvalidatable,BNSuspendable>
@property (nonatomic,readonly) long long destination; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier; 
@property (assign,nonatomic,__weak) id<BNBannerSourceDelegate> delegate; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@optional
-(BOOL)revokePresentableWithRequestIdentifier:(id)arg1 animated:(BOOL)arg2 reason:(id)arg3 userInfo:(id)arg4 error:(out id*)arg5;

@required
-(id<BNBannerSourceDelegate>)delegate;
-(id)layoutDescriptionWithError:(out id*)arg1;
-(NSString *)requesterIdentifier;
-(void)setDelegate:(id)arg1;
-(BOOL)isValid;
-(id)revokeAllPresentablesWithReason:(id)arg1 userInfo:(id)arg2 error:(out id*)arg3;
-(id)revokePresentableWithRequestIdentifier:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(out id*)arg5;
-(long long)destination;
-(BOOL)postPresentable:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id*)arg4;

@end

