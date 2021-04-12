/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol IAMApplicationContextProvider <NSObject>
@property (readonly) BOOL allowsModalMessageDisplay; 
@property (assign,nonatomic) double lastMessageDisplayTime; 
@optional
-(id)viewControllerForModalPresentation;
-(void)messageCoordinator:(id)arg1 didRequestAction:(id)arg2;
-(BOOL)allowsModalMessageDisplay;
-(id)presentationPolicyForPolicyGroup:(long long)arg1;
-(double)lastMessageDisplayTime;
-(void)setLastMessageDisplayTime:(double)arg1;

@required
-(id)contextPropertyWithName:(id)arg1;

@end

