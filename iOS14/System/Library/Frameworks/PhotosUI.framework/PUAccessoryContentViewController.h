/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUAccessoryContentViewController <NSObject>
@property (assign,nonatomic,__weak) id<PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate; 
@property (nonatomic,readonly) UIEdgeInsets contentInsets; 
@property (nonatomic,readonly) CGSize minimumContentSize; 
@optional
-(CGSize)minimumContentSize;
-(void)setMaxVisibleContentInsetsWhenInEdit:(UIEdgeInsets)arg1;

@required
-(UIEdgeInsets)contentInsets;
-(CGRect*)contentBoundsInCoordinateSpace:(id)arg1;
-(void)setContentInsets:(UIEdgeInsets)arg1 changeReason:(long long)arg2;
-(void)setAccessoryContentViewControllerDelegate:(id)arg1;
-(id<PUAccessoryContentViewControllerDelegate>)accessoryContentViewControllerDelegate;
-(BOOL)contentAreaContainsPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2;

@end

