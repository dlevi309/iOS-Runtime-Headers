/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXPhotosGridOptionsController <NSObject>
@property (nonatomic,readonly) NSString * actionPerformerType; 
@property (nonatomic,readonly) NSString * systemIconImageName; 
@property (assign,nonatomic,__weak) id<PXPhotosGridOptionsControllerDelegate> optionsDelegate; 
@optional
-(void)preloadOptions;

@required
-(NSString *)actionPerformerType;
-(id<PXPhotosGridOptionsControllerDelegate>)optionsDelegate;
-(void)setOptionsDelegate:(id)arg1;
-(NSString *)systemIconImageName;

@end

