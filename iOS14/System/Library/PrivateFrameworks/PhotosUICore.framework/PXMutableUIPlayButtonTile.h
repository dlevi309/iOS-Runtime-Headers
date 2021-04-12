/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXImageRequester;


@protocol PXMutableUIPlayButtonTile <NSObject>
@property (assign,nonatomic) CGSize playButtonSize; 
@property (assign,nonatomic) long long playButtonStyle; 
@property (nonatomic,retain) PXImageRequester * imageRequester; 
@property (assign,nonatomic) CGPoint imageViewportLocation; 
@property (assign,nonatomic) BOOL allowsBackdropStatisticsSuppression; 
@required
-(void)setPlayButtonSize:(CGSize)arg1;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(id)arg1;
-(CGSize)playButtonSize;
-(long long)playButtonStyle;
-(void)setPlayButtonStyle:(long long)arg1;
-(CGPoint)imageViewportLocation;
-(void)setImageViewportLocation:(CGPoint)arg1;
-(BOOL)allowsBackdropStatisticsSuppression;
-(void)setAllowsBackdropStatisticsSuppression:(BOOL)arg1;

@end

