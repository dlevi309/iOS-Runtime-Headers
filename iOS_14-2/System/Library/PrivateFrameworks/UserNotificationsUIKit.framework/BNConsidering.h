/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol BNConsidering <NSObject>
@property (assign,nonatomic,__weak) id<BNConsideringDelegate> delegate; 
@optional
-(id<BNConsideringDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@required
-(long long)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2;
-(long long)shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3;

@end

