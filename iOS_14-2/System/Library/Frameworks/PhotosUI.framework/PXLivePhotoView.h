/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class ISLivePhotoPlayer;


@protocol PXLivePhotoView
@property (nonatomic,retain) ISLivePhotoPlayer * player; 
@required
-(ISLivePhotoPlayer *)player;
-(void)setPlayer:(id)arg1;
-(void)setSeekTime:(SCD_Struct_PH1)arg1;
-(void)setTrimmedTimeRange:(SCD_Struct_PH2)arg1;

@end

